#include<stdio.h>

int main(){
    int n,m,sum1=0,sum2=0,final;
    printf("Enter n:-");
    scanf("%d",&n);
    printf("Enter m:-");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){
        if(i%m==0){
            sum2=sum2+i;
        }else{
            sum1=sum1+i;
        }

    }

    final=sum1-sum2;
    printf("%d\n",final);

}