#include<stdio.h>
int main(){
    int n=2345;
    int count=0;
    while (n > 0)
    {
        int lastdigti=n%10;
        count++;
        n=n/10;
    }
    printf("your number of digit:-%d",count);
    

}