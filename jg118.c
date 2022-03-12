#include <stdio.h>

int main()
{
int a,b,c;
int num1;
int i;
int count;
scanf("%d", &a);

for(i=1;i<=a;i++)
{
count=i;

b = i;
while(b > 0)
{
       count += b%10;
       b/=10;
}
if(count==a)
{
printf("%d",i);
return 0;
}

}

printf("0");

}
