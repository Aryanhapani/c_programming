#include<stdio.h>

int main(){
    int n=6;
    int a=0;
    int b=1;

    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        int c=a+b;
            a=b;
            b=c;
    }

    return 0;
}