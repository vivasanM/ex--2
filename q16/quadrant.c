#include<stdio.h>
int main() 
{
    float x,y;
    printf("enter the value of x:");
    scanf("%f",&x);
    printf("enter the value of y:");
    scanf("%f",&y);
    if(x>0&&y>0)
    printf("QUADRANT-1");
    else if(x<0&&y>0)
    printf("QUADRANT-2");
    else if(x<0&&y<0)
    printf("QUADRANT-3");
    else if(x>0&&y<0)
    printf("QUADRANT-4");
    else if(x==0)
    printf("Y-AXIS");
    else if(y==0)
    printf("X-AXIS");
    return 0;
    }
