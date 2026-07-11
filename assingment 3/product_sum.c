#include<stdio.h>

int main(){
    int n=4421;
    int product=1;
    int sum=0;
    int result;

    while (n > 0)
    {
        int ld=n%10;
        product=product*ld;
        sum=sum+ld;
        n=n/10;
    }
    result=product-sum;
    printf("%d",result);
    
}