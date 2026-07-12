#include<stdio.h>
int sumdo(int n,int sum){
    
    
    while (n != 0)
     {
      int ld=n%10;
      sum=sum+ld;
      n=n/10;

      }

      return sum;
}

int main(){
    int n=9875;

    
    while (n >= 10)
    {
        int sum=0;
        
       int ans=sumdo(n,sum);
    
       n=ans;
}
    
    printf("%d",n);
    return 0;
}