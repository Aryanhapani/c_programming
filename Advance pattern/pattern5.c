#include<stdio.h>

int main(){
    int n=5;

    int space=0;
    for(int i=1;i<=2*n-1;i++){
        
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        if(i<n){
            space=space+2;
        }else{
            space=space-2;
        }

        int star;

        if(i<=n){
            star=n-i+1;
        }else{
            star=i-n+1;
        }

        for(int j=1;j<=star;j++){
            printf("*");
        }

        

        
       
        printf("\n");
    }

    return 0;
}