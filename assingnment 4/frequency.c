

#include <stdio.h>

int check(int n,int n2){
    int count=0;
    while(n > 0){
    int ld=n%10;
    if(ld==n2){
        count++;
    }
    n=n/10;
    
}
  return count;
}

int main()
{
   int n=882398;
   int n2=n;
   
   while(n2> 0){
       int ld=n2%10;
       
       int s=check(n,ld);
        printf("%d:-12 %d:-\n",ld,s);

       n2=n2/10;
   }
   
   
    return 0;
}