#include<stdio.h>

int main(){
    int n=9875;

    
    while (n >= 10)
    {
        int sum=0;
        
    
    
    while (n != 0)
     {
      int ld=n%10;
      sum=sum+ld;
      n=n/10;

      }
       n=sum;
}
    
    printf("%d",n);
    return 0;
}