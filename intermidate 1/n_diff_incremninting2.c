#include<stdio.h>

int main(){
    int n;
    printf("Enter number:-");
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<n;i++){
        printf("%d ",num);
        num=num+i+1;
    }
    return 0;
}