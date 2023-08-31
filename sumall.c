#include<stdio.h>

int main(){
int n;
printf("Enter the three digit number :");
scanf("%d",&n);
int first = n/100;
int temp = n%100;
int second = temp/10;
int third = temp%10;
int sum = first + second + third;
printf("Sum of the digits is : %d\n",sum);
}

