#include<stdio.h>

int fre(int n,int num){
     
    int count=0;
    while (n > 0)
    {
        int ld=n%10;

        if(num==ld){
            count++;
            
          }
          n=n/10;
        
    }
    return count;
}

int main(){
    int n=882398;
    
   for(int i=0;i<=9;i++){
    int ans=fre(n,i);

    if(ans >0){
        printf("%d -> %d\n",i,ans);
    }

   }
    
    return 0;
}




    

