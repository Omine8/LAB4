#include<stdio.h>

int main(){
int m;
printf("Enter the distance in meters :");
scanf("%d",&m);
int km = m/1000;
int m2 = m%1000;
printf("%d meter = %d km and %d meters \n",m,km,m2);
}

