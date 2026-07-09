#include<stdio.h>
int main(){
   int n=15121;
   int flag=1;
   while (n > 0)
   {
     int lg=n%10;
     if(lg != 1 && lg !=0){
        flag=0;
        break;
     }
    
     n=n/10;
   }
   
   if(flag){
    printf("true");
   }else{
    printf("false");
   }
   

    return 0;
}