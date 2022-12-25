#include<stdio.h>
void printn(int,int);
int main()
{
int a,b;
printf("enter the range");
scanf("%d%d",&a,&b);
printn(a,b);
}
void printn(int a,int b)
{
   printf("prime no between the %d and %d are\n",a,b);
int i,j;
for(i=a;i<=b;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
break;
}
if(j>i/2){

printf("%d\n",i);
}
}
}
