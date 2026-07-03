#include<stdio.h>

int main(){
    int n=634787;
   
    int max=n%10;
   
    while (n > 0)
    {
        int lastdigit=n%10;
        if(max < lastdigit){
           max=lastdigit;
        }
        n=n/10;

    }
   printf("max is :-%d",max);
   
    return 0;
}