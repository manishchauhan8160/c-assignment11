#include<stdio.h>
int prime(int);
int main()
{
int n,next;
printf("enter the number");
scanf("%d",&n);
next=prime(n);
printf("%d",next);
}
int prime(int n)
{
int i,j;
for(i=n+1;i<=n*2;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
break;
}
if(j>i/2)
return i;
}
return 0;
}
