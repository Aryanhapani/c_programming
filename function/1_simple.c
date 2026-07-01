#include<stdio.h>

int calcper(int m1,int m2,int m3){
    int total=m1+m2+m3;
    int per=total/3;
    printf("%d",per);
    return per;

}
int main(){

  int m1=45;
  int m2=50;
  int m3=55;
  calcper(m1,m2,m3);

  return 0;
}