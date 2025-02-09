#include<stdio.h>
int main()
{
int n1,n2,sum;
printf("enter the values of n1,n2:");
scanf("%d %d",&n1,&n2);
sum=n1+n2;
if(sum%5==0)
{
printf("it is divisible by 5");
}
else
{
printf("it is not divisible by 5");
}
}

