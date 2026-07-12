#include<stdio.h>

int main(){
    int n=45963899;
    int max=n%10;
    int sec=n%10;

    while (n > 0)
    {
        int ld=n%10;
        if(max < ld){
            sec=max;
            max=ld;
        }else if(max != ld && (sec==max||sec < ld)){
            sec=ld;
        }
        n=n/10;
    }

    printf("your second largest element:-%d",sec);


    
    

    return 0;
}