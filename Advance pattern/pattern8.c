#include<stdio.h>

int main(){
     int n=5;
     int star=2*n-1;
     for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){
            printf(" ");
        }

        for(int j=0;j<star;j++){
            if(j==0 || j==star-1){

                printf("*");
            }else{
                printf(" ");
            }
        }
        star=star-2;
        printf("\n");
     }
    return 0;
}