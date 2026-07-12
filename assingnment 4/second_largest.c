#include<stdio.h>

int main(){
    int n=45963899;
    int n2=n;
    int max=n%10;
    int sec=-1;

    while (n > 0)
    {
        int ld=n%10;
        if(max < ld){
            max=ld;
        }
        n=n/10;
    }

    printf("%d",max);


    while (n2 > 0)
    {
        int ld=n2%10;
        if(max != ld && sec < ld){
            sec=ld;
        }
        n2=n2/10;
    }
    printf("%d",sec);

    

    return 0;
}