#include<stdio.h>
int main(){
   int n=1011001111;
   int is_binary=1;
   while (n != 0)
   {
     int ld=n%10;
     if(ld < 0 || ld > 1){
        is_binary=0;
        break;
     }
    
     n=n/10;
   }
   
   if(is_binary){
    printf("true");
   }else{
    printf("false");
   }
   

    return 0;
}