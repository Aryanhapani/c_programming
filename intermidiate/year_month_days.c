#include<stdio.h>
int main(){
     int days=1258;

     int year=days/365;
     printf("year:-%d\n",year);
     days=days%365;
     int month=days/30;
     printf("month:-%d\n",month);
     days=days%30;
     printf("days:-%d\n",days);
     
    return 0;
}