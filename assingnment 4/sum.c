

#include <stdio.h>
int sumofdigit(int n){
    int sum=0;
    while(n >0 ){
        int ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n=9875;
    int sum=sumofdigit(n);
    // printf("%d",sum);
    while(sum > 9){
        sum=sumofdigit(sum);
    }
    
    printf("%d",sum);
    return 0;
}