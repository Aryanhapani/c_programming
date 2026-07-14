#include<stdio.h>

int main(){
    int n=45963899;
    int max=-1;
    int sec=-1;

    while (n > 0)
    {
        int ld=n%10;
        if(max < ld){
            sec=max;
            max=ld;
        }else if(max != ld && sec<ld){
            sec=ld;
        }
        n=n/10;
    }

    printf("your second largest element:-%d",sec);


    
    

    return 0;
}