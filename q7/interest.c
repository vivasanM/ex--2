#include<stdio.h>
int main()
{
float p,r,y,s;
printf("ENTER THE PRINCIPLE AMOUNT:");
scanf("%f",&p);
printf("ENTER THE RATE OF INTEREST:");
scanf("%f",&r);
printf("ENTER THE NUMBER OF YEAR");
scanf("%f",&y);
s=(p*r*y)/100;
printf("SIMPLE INTEREST=%.2f",s);
return 0;
}
