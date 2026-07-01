#include<stdio.h>

void change(int x){
    x=50;
    printf("inside function:-%d\n",x);

}
int main(){
    int x=10;

    printf("before function:-%d\n",x);
    
    change(x);
    
    printf("After function:-%d\n",x);


    return 0;
}