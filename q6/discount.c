#include<stdio.h>
int main()
{
int p,d,n;
printf("enter the price amount:");
scanf("%d",&p);
if(p<=1000)
{
printf("the discount is only above 1000/n");
}
else if((p>1000)&&(p<5000))
{
printf("your discount is 5 percent/n");
d=p*0.05;
n=p-d;
printf("the price after discount is %d/n",n);
}
else
{
printf("your discount is 15 percent/n");
d=p*0.15;
n=p-d;
printf("the price after discount %d/n:",n);
}
return 0;
}

