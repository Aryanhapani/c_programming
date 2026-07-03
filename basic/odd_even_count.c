#include<stdio.h>
int main(){
    int n=4435676;
    int oddcount=0;
    int evencount=0;
    while (n > 0)
    {
        n/=10;
        if(n%2==0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    printf("evencount:-%d\n",evencount);
    printf("oddcount:-%d\n",oddcount);
    

    return 0;
}