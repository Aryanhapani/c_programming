#include<stdio.h>

int main(){
    int n=5;

    for(int i=1;i<=2*n-1;i++){
         int space;
        if(i<=n){
           space=n-i;
        }else{
            space=i-n;
        }

        for(int j=1;j<=space;j++){
            printf(" ");
        }

        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}