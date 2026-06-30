#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter number a:-");
    scanf("%d",&a);
    printf("Enter number b:-");
    scanf("%d",&b);
    printf("Enter number c:-");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("a is big=%d",a);
    }else if (b>a && b>c)
    {
        printf("b is big=%d",b);
    }else{
        printf("c is big=%d",c);
    }
    
    
    return 0;
}