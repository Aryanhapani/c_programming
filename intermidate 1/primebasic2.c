#include<stdio.h>
int main(){
    int n=20;
    int count=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            
             break;
            
        }
    }
    if(count > 0){
        printf("not prime");
    }else{
        printf("prime");
    }
    return 0;
}