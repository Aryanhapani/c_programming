#include<stdio.h>
int main(){
    int a=15;
    int b=10;

    a=a^b;
    b=a^b;
    a=a^b;

    printf("after swapping:-\n");
    printf("your a is:-%d\n",a);
    printf("your b is:-%d",b);



    return 0;
}