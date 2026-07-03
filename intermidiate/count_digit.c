#include<stdio.h>
int main(){
    int n;
    printf("Enter number:-");
    scanf("%d",&n);
    int count=0;
    while (n > 0)
    {
        
        count++;
        n=n/10;
    }
    printf("your number of digit:-%d",count);
    

}