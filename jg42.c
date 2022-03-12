#include <stdio.h>

int main(void)
{
int num1, num2;
int i=0;
int u=0;
printf("정수1입력:");
scanf("%d", &num1);
printf("정수2입력:");
scanf("%d", &num2);
if(num1<num2)
{
for( i=num1; i<=num2; i++ )
{
u+=i; 
}
}
else(num1>num2);
{
for( i=num2; i<=num1; i++ )
{
u+=i; 
}
}
printf("모든 사이값의 합: %d", u);
return 0;
}
