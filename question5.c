#include<stdio.h>
void printprime(int);
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printprime(n);
}
void printprime(n)
{
int i,j,count=0;
for(i=1;i<=n*50;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
break;
}
if(j>i/2){
printf("%d\n",i);
count++;}
if(count==n){
break;}
}
}
