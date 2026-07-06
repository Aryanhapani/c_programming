#include<stdio.h>

int main(){
     int base=3;
     int exponenet=4;
     int ans=1;

     for(int  i=1;i<=exponenet;i++){
        ans=ans*base;
     }
     printf("%d\n",ans);

    return 0;
}