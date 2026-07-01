#include<stdio.h>
int increment(int x){
    x++;

}
int main(){
    int a=5;
    increment(a);
    printf("inside function:-%d\n",a);
}