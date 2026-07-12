#include<stdio.h>
int main(){
   int n=1245;
   int count=n%10;

   while (n>0)
   {
      int lastdigit=n%10;
      if(count==lastdigit){
         count=count-1;
      }else{
         break;
      }
      n=n/10;
   }
   printf("%d",count);
   
}