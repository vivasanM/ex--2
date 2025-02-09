#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    printf("A is largest/n");
    else if(b>a&&b>c)
    printf("B-is larger");
    else
    printf("\n C-is larger");
    if(a<b&&a<c)
    printf("\n A-is smallest");
    else if(b<a&&b<c)
    printf("B-is smallest");
    else
    printf("C-is smallest");
    return 0;
    
}
