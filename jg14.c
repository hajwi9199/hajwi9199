#include <stdio.h>

int main(void)
{
int result;
int num1, num2, num3;

printf("정수 1: ");
scanf("%d", &num1);
printf("정수 2: ");
scanf("%d", &num2);
printf("정수 3: ");
scanf("%d", &num3);

result=num1*num2+num3;
printf("%d * %d + %d = %d \n", num1, num2, num3, result);
return 0;
}