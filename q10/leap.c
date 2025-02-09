#include<stdio.h>
int main()
{
int a;
printf("enter a year:");
scanf("%d",&a);
if(a%4==0)
printf("leap year");
else
printf("Non leap year");
return 0;
}
