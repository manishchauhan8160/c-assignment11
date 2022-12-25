#include<stdio.h>
int main()
{
int x=0,i;
for(i=1;i<=5;i++)
{
x=x+fact(i)/i;
}
printf("sum=%d",x);
}
int fact(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
fact=fact*i;
return fact;
}

