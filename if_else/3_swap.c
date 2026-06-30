#include<stdio.h>
int main(){
     int a;
     int b;
     int temp;
     printf("Enter number a:-");
     scanf("%d",&a);
     printf("Enter number b:-");
     scanf("%d",&b);
     
     printf("befor swapping:-\n");
     printf("your a:-%d\n",a);
     printf("your b:-%d\n",b);

     temp=a;
     a=b;
     b=temp;
    
     printf("after swapping:-\n");
     printf("your a:-%d\n",a);
     printf("your b:-%d\n",b);
     
     
    return 0;
}