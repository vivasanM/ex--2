#include<stdio.h>
#include<ctype.h>
int main()
{
char a;
printf("enter the charater:");
scanf("%c",&a);
if(isupper(a))
{
printf("IT IS A UPPERCASE");
}
else if(islower(a))
{
printf("IT IS A LOWERCASE");
}
else if(isdigit(a))
{
printf("IT IS A DIGIT");
}
else
{
printf("enter the valid elements");
}
return 0;
}
