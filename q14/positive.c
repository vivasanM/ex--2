#include<stdio.h>
int main()
{
int a;
printf("ENTER THE VALUE OF a:");
scanf("%d",&a);
if(a==0)
printf("ZERO");
else if(a>0)
printf("POSITIVE");
else if(a<0)
printf("NEGATIVE");
return 0;
}
