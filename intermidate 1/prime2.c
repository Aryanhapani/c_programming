#include<stdio.h>
int main(){
   
    int left;
    int right;
    int i,j;
     printf("Enter left:-");
     scanf("%d",&left);
     
     printf("Enter right:-");
     scanf("%d",&right);

     for(i=left;i<right;i++){
         //i=4,5,6,7,8,9
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            printf("%d\n",i);
        }
     }

    return 0;
}