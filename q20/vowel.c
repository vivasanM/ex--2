#include<stdio.h>
int main()
{
char let;
printf("Enter a character:");
scanf("%c",&let);
if(let=='a'|| let=='A'|| let=='E'|| let=='e'|| let=='i'|| let=='I'|| let=='o'|| let=='O' ||  let=='u'|| let=='U')
printf("VOWEL");
else
printf("CONSONANT");
return 0;
}
