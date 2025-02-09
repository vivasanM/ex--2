#include <stdio.h>

int main()
{
int a,b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("AFTER SWAPPING a=%d,b=%d",a,b);
return 0;
}
