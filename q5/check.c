#include<stdio.h>
#include<ctype.h>
int main()
{
char a;
printf("enter any value:");
scanf("%c",&a);
if(isalpha(a))
printf("IT IS A CHARACTER");
else if(isdigit(a))
printf("IT IS A DIGIT");
else if(isblank(a))
printf("IT IS A BLANKSPACE");
else
printf("IT IS A SPECIAL CHARATER");
return 0;
}
