#include<stdio.h>
int isprime(int n){

     for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}
int main(){
    int left;
    int right;
     printf("Enter left:-");
     scanf("%d",&left);
     
     printf("Enter right:-");
     scanf("%d",&right);
     for(int i=left;i<right;i++){
        if (isprime(i)==1)
        {
           printf("%d\n",i);
        }
        
     }

        return 0;
        }
           
       
     
 
