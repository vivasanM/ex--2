#include<stdio.h>
int main()
{
int n,i,flg;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++){
if(n%i==0)
{
flg=1;
}
}
if(flg==1){
printf("COMPOSITE NUMBER");
}
else
printf(" PRIME NUMBER");
return 0;
}

