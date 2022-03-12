#include <stdio.h>
int a = 0;
int i=0;

int tr(int num1)
{


if(num1<=0)
{
return;
}
printf("*");
if(num1==1)
{
return;
}
printf("*");

tr(num1-1);
}

int gr(int num2, int num3)
{
int num4;
int num5;
int num6;

num6=num3;

for(num4=a; num4>num6; num4--) 
{
printf(" ");
}

if(num2 >= num3)
{
return;
}

tr(num3);
printf("\n");

gr(num2, num3-1);
}

	int main()
	{
	int n;
	while(1)
	{

	scanf("%d", &n);
	if(n==0)
	{
	break;
	}
	a=n;
	gr(1, n); 
	xgr(1, n); 
	i=0;
	}
	}

int xtr(int num1)
{


if(num1<=0)
{
return;
}
printf("*");
if(num1==1)
{
return;
}
printf("*");

xtr(num1-1);
}

int xgr(int num2, int num3)
{
int num4;

if(i>0)
{
for(num4=num2; num4<a; num4++) 
{
printf(" ");
}
}
i++;
if(num2 > num3)
{
return;
}

xtr(num2);
printf("\n");

xgr(num2+1, num3);
}
