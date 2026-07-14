#include<stdio.h>

void checkself(int i){

    int original=i;

    while (i != 0)
    {
        int ld=i%10;

        if(ld==0 || original % ld != 0){
            return;
        }

        i=i/10;
    }
    printf("%d\n",original);
    
}

int main(){
     int left,right;
     printf("Enter left:-");
     scanf("%d",&left);
     
     printf("Enter right:-");
     scanf("%d",&right);
    for(int i=left;i<=right;i++){
        checkself(i);
    }

    return 0;
}