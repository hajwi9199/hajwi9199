#include <stdio.h>

int main(void)
{
int a, b, c;

printf("정수1:");
scanf("%d", a);
printf("정수2:");
scanf("%d", b);
printf("정수3:");
scanf("%d", c);

if(a%2==0)
{
printf("%d", a);
}
if(b%2==0)
{
printf("%d", c);
}
if(c%2==0)
{
printf("%d", c);
}
return 0;
}
