#include<stdio.h>


int main(){
     int n=5;
     int dec=0;
     int place=1;

     while (n > 0)
     {
        int rem=n%2;
        dec=dec+(rem * place);
        place=place*10;
        n=n/2;

     }

     printf("%d",dec);
     

    return 0;
}