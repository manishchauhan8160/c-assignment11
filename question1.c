#include<stdio.h>
int lcm(int,int);
int main()
{
int a,b,l;
printf("enter the number");
scanf("%d%d",&a,&b);
l=lcm(a,b);
printf("lcm=%d",l);
}
int lcm(int a,int b)
{
    int i;
for(i=a>b?b:a;i<=a*b;i++)
{
if(i%a==0&&i%b==0)
return i;
}
return 0;
}
