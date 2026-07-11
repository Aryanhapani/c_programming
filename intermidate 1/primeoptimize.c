#include<stdio.h>

int main(){

    int l,r;
    int prime=1;
    printf("l:-");
    scanf("%d",&l);
    printf("r:-");
    scanf("%d",&r);

    for (int i = l; i < r; i++)
    {
        if(i==2){
          continue;
        }

        if(i%2==0){
            continue;
        }


        for(int j=3;j*j<=i;i=i+2){
            if(i%j==0){
                prime=0;
                break;
            }
        }

        if(prime){
            printf("%d\n",i);
        }
    }
    



    return 0;
}