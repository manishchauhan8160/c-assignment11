#include<stdio.h>
void square(int);
int main()
{
int n;
printf("enter the  number");
scanf("%d",&n);
square(n);
}
void square(int n)
{
printf("square of %d is%d",n,n*n);
}
