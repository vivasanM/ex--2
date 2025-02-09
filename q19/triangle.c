#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values:");
scanf("%d %d %d",&a,&b,&c);
if(a==b&&b==c)
printf("EQUILATERAL TRIANGLE");
else if(a==b||b==c||c==a)
printf("ISOSCELES TRIANGLE");
else
printf("SCALENE TRIANGLE");
return 0;
}
