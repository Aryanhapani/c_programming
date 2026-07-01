#include<stdio.h>

int f1(int a,int b){
    ++a;
    ++b;
    printf("outside fnc:-%d\n",a);
    printf("outside fnc:-%d\n",b);
   
}

int main(){
    int a=50;
    int b=70;
    f1(a,b);
    printf("inside fnc:-%d\n",a);
    printf("inside fnc:-%d\n",b);

}