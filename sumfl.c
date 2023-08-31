#include<stdio.h>

int main(){
int n;
printf("Enter the six digit number :");
scanf("%d",&n);
int first = n/100000;
int last = n%10;
int sum = first + last;
printf("Sum of 1st and last digit is : %d\n",sum);
}

