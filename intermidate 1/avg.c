#include<stdio.h>

int main(){
    int n=8972;
    int count=0;
    int sum=0;
    while (n > 0)
    {
        int lg=n%10;
        sum=sum+lg;
        count++;
        n=n/10;
    }
    printf("%d",sum/count);
    
    return 0;
}