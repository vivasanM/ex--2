#include<stdio.h>
#include<math.h>
int main()
{
int n,p;
printf("ENTER THE VALUE OF n:");
scanf("%d",&n);
p=n/sqrt(n);
if(p==sqrt(n))
printf("THE GIVEN NUMBER IS A PERFECT SQUARE");
else
printf("THE GIVEN NUMBER IS NOT A PERFECT SQUARE");
}
