#include<stdio.h>
int main(){ 
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    int num=1;
    int diff=1;
    for(int i=0;i<n;i++){
        printf("%d ",num);
        num=num+diff;
        diff++;
    }


    return 0;
}