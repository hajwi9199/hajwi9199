#include <stdio.h>

int main(void)
{
int result;
int num1;

printf("숫자:");
scanf("%d", &num1);

result=num1*num1;
printf("%d의 제곱= %d", num1, result);
}