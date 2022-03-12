#include <stdio.h>

int main(void)
{
int num1, num4;
int num2=1;
int num3=1;
while(1)
{
printf("출력할 * 의 개수");
scanf("%d", &num1);
num4=num1;
while(num2<=num1)
{
while(num3<=num4)
{
printf("*");
num3++;
}
printf("\n");
num3=1;
num4--;
num2++;
}
num2=1;
}
}
