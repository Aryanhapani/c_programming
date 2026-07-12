#include<stdio.h>

int main(){
   int n=45963899;
   int max=n%10;
   int sec=n%10;

   while (n > 0)
   {
    int ld=n%10; 

    if(max < ld){//9< 9

        sec=max;//sec=9
        max=ld;//max=9

    }else if(max != ld &&(sec==max || sec < ld)){
             //9!=8  && 9==9
         sec=ld;
    }
    n=n/10;

   }
   printf("%d",sec);
   


    return 0;
}