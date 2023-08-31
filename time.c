#include<stdio.h>

int main(){
int sec;
printf("Enter the time in seconds :");
scanf("%d",&sec);
int temp = sec;
int hour = temp/3600;
temp=temp%3600;
int minute = temp/60;
temp=temp%60;
printf("%d second = %d Hour,%d Minute and %d second\n",sec,hour,minute,temp);
}

