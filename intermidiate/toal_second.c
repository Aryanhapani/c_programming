#include<stdio.h>

int main(){

    int second=41999;
    int horus=second/3600;
    printf("your horus:-%d\n",horus);
    second=second%3600;
    int minutes=second/60;
    printf("your minutes:-%d\n",minutes);
    second=second%60;
    printf("your second:-%d\n",second);

    return 0;
}