#include <stdio.h>

int main(void)
{
int num1;
int u=0;
int y=0;

printf("나이 입력:");
scanf("%d", &num1);

u = 2012 - num1;
y = u % 100;
if(u/100==19)
{
printf("%d %d", y, 1);
}
if(u/100==20)
{
printf("%d %d", y, 3);
}
}