#include<stdio.h>
int fact(int);
int combi(int,int);
int main()
{
	system("cls");
int i,j,x,m;
for(i=0;i<=4;i++)
{
x=1;
m=0;
for(j=0;j<=8;j++)
{
if(j>=4-i&&j<=4+i)
{
if(x%2!=0)
{
		printf("%d",combi(i,m));
		x=2;
		m++;
}
else
{
printf(" ");
x=1;
}
}
else
printf(" ");
}
printf("\n");
}
return 0;
}
int combi(int i,int j)
{
	return fact(i)/(fact(j)*fact(i-j));
}
int fact(int n)
{
	int i,temp=1;
	for(i=1;i<=n;i++)
	{
		temp=temp*i;
	}
	return temp;
}
