#include<stdio.h>
void fibo(int);
int main()
{
int n;
printf("enter the range");
scanf("%d",&n);
fibo(n);
}
void fibo(int n)
{
int a=-1,b=1,c;
while(n)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
n--;
}
}
