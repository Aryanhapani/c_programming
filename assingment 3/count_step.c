#include<stdio.h>

int main(){
    int num=8;
    int count=0;

    while (num != 0)
    {
        if(num%2==0){
            num=num/2;
            printf("%d\n",num);
            count++;
        }else{
            num=num-1;
            printf("%d\n",num);

            count++;
        }
    }
    printf("%d",count);
    
}