#include<stdio.h>

int main()
{
float w,h,b;
printf("enter your weight=");
scanf("%f",&w);
printf("enter your height in meter=");
scanf("%f",&h);
b=w/(h*h);
printf("BMI is %.1f\n",b);
if(b<18.5)
{
printf("underweight");
}
else if((b>=18.5)&&(b<24.9))
{
printf("normal weight");
}
else if((b>=25)&&(b<=29.9))
{
printf("overweight");
}
else
{
printf("obesity");
}
return 0;
}
