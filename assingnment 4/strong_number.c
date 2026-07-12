#include<stdio.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int sumdo(int n){
    int sum=0;
    while (n > 0)
    {
        int ld=n%10;
        sum=sum+factorial(ld);
        n=n/10;
    }
    return sum;
    
}

int main(){
   int n=125;

   int ans=sumdo(n);
   if(ans==n){
    printf("Strong number:-%d",ans);
   }else{
    printf("not storng number");
   }


    return 0;
}