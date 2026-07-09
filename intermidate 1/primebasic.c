#include<stdio.h>
int main(){
    int n=17;
    int count=0;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
     
    if(count > 2){
        printf("not prime");
    }else{
        printf("prime");
    }

    return 0;
}