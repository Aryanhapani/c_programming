#include<stdio.h>

int main(){
    int num=8;
    int count=0;

    while (num != 0)
    {
        if(num%2==0){
            num=num/2;
            count++;
        }else{
            num=num-1;
            count++;
        }
    }
    printf("%d",count);
    
}