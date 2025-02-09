#include<stdio.h>
int main()
{
int a,b,c;
printf("ENTER THE VALUE OF a:");
scanf("%d",&a);
printf("ENTER THE VALUE OF b:");
scanf("%d",&b);
printf("ENTER THE VALUEE OF c:");
scanf("%d",&c);
if((a>b)&&(a>c))
{
printf("a is largest:");
}
else if((b>a)&&(b>c))
{
printf("b is largest");
}
else
{
printf("c is largest");
}
return 0;
}
