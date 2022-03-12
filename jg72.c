#include <stdio.h>

int main(void)
{
int num1;
int num3 = 1;
int num2 = 0;
int num4;
int i;
printf("입력할 파보나치 수열개수:");
scanf("%d", &num1);

for(i=0; i<num1; i++)
{
printf("%d ", num2);
num4 = num2 + num3;
if(num2 > 0)
{
num3 = num2;
}
num2 = num4;
}
}
