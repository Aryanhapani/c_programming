#include<stdio.h>

void printNumber(int n){
   if(n==5){
    return 0;
   }
   printf("%d\n",n);
}

int main(){
    printf("start");
    for(int i=1;i<=10;i++){
        printNumber(i);
    }
    printf("End");

    return 0;
}