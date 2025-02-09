#include<stdio.h>
int main()
{
int a;
printf("ENTER THE MARK:");
scanf("%d",&a);
if((a>=90)&&(a<=100))
printf("A-GRADE");
else if((a<=89)&&(a>80))
printf("B-GRADE");
else if((a<=79)&&(a>=50))
printf("C-GRADE");
else if((a<=49)&&(a>=35))
printf("D-GRADE");
else
printf("FAIL");
return 0;
}

