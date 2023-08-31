#include<stdio.h>

int main(){
float mp,bp,d;
printf("Enter the Marked Price : ");
scanf("%f",&mp);
printf("Enter the Buying Price : ");
scanf("%f",&bp);
printf("Enter the Discount : ");
scanf("%f",&d);
float dmb  = mp-bp;
float dis = (d*mp)/100;
float dp = mp-dis;
if(dp<bp)
{
float pp = ((bp-dp)/bp)*100;
printf("The seller has made a profit of %.2f\n",pp);
}
else if(bp==dp)
{
printf("Niether profit nor loss has been made\n");
}
else
{
float lp = ((dp-bp)/dp)*100;
printf("The seller has incurred a loss of %.2f\n",lp);
}
}
