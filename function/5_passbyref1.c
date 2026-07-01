#include<stdio.h>

int change(int *x){
    *x=50;
    printf("inside function =%d\n",*x);
}

int main(){
    int a=10;

    printf("before =%d\n",a);
    change(&a);
    printf("afetr =%d\n",a);
   

    return 0;
}