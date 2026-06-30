#include<stdio.h>
int main(){
     int a;
     int b;
     printf("Enter number a:-");
     scanf("%d",&a);
     printf("Enter number b:-");
     scanf("%d",&b);
     
     printf("befor swapping:-\n");
     printf("your a:-%d\n",a);
     printf("your b:-%d\n",b);
    
    
    
     a=a+b;//a=20+30==50
     b=a-b; //b=50-30//20
     a=a-b;//a=50-20//30
     
     printf("after swapping:-\n");
     printf("your a:-%d\n",a);
     printf("your b:-%d\n",b);
     

         return 0;
}