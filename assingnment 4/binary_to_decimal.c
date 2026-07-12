#include<stdio.h>

int main(){

    int n=101;
    int bin=0;
    int power=1;

    while (n >0 )
    {
        int rem=n%10;
        bin=bin+(rem*power);
        power=power*2;
        n=n/10;
    }
    printf("%d",bin);
    
    return 0;
}