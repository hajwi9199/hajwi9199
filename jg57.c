#include <stdio.h>

int main(void)
{
int num1;
int num2, num3, num4;
int u=0;
int y=0;
int o=0;
printf("생년월일(6자리)입력:");
scanf("%d", &num1);
printf("성별정보(1자리)입력:");
scanf(" %d", &num4);
o = num1 / 10000;

switch(num4)
{
case 1:
case 2:
u = 1900 + o;
y = 2012 - u;
printf("%d년생, %d살이다.", u, y);
break;
case 3:
case 4:
u = 2000 + o;
y = 2012 - u;
printf("%d년생, %d살이다.", u, y);
break;
}
}