#include <stdio.h>

int main()
{
int a,b,c;
int num1,num2=1000000;
int i;
int count=0;
scanf("%d", &a);

for(i=1;i<a;i++)
{
count=0;
while(i != 0)
{
count=count + i%10;
i/=10;
}
if(i+count==a)
{
printf("%d",i);
}

}

}