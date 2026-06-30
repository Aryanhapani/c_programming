#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter number a:-");
    scanf("%d",&a);
    printf("Enter number b:-");
    scanf("%d",&b);
    if (a>b)
    {
        printf("a is big =%d\n",a);
    }else{
        printf("b is big =%d\n",b);
    }
    
    return 0;
}