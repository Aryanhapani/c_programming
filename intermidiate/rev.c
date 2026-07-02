#include<stdio.h>
int main(){
    int n=12345;
    int rev=0;
    while (n > 0)
    {
     int lastdigit=n%10;
     rev=rev*10+lastdigit;
     n=n/10;
    }
    printf("your reverse number is:-%d",rev);
    



    return 0;
}