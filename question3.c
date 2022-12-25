#include<stdio.h>
int prime(int);
int main()
{
int n,p;
printf("enter a number");
scanf("%d",&n);
p=prime(n);
if(p==1)
printf("not a prime number");
else
printf("prime number");
}
int prime(int n)
{
    int i;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
return 1;
}
return 0;
}
