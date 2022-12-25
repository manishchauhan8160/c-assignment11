#include<stdio.h>
int main()
{
int a,b,h;
printf("enter two number");
scanf("%d%d",&a,&b);
h=hcf(a,b);
printf("hcf=%d",h);
}
int hcf(int a,int b)
{
int i;
for(i=a>b?b:a;i>=1;i--)
{
if(a%i==0&&b%i==0)
return i;
}
return 0;
}
