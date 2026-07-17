

#include <stdio.h>

int main()
{
   int n=5;
       int space=0;
       int star=2*n-1;
   for(int i=1;i<=2*n-1;i++){
       
      
       
       for(int j=1;j<=space;j++){
           printf(" ");
       }
       
      
       
       for(int j=1;j<=star;j++){
           printf("*");
       }
       
       printf("\n");

        if(i < n){
           space=space+1;
       }else{
           space=space-1;
       }
       
        if(i < n){
           star=star-2;
       }else{
           star=star+2;
       }
   }

    return 0;
}