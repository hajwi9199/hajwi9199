#include <stdio.h>

int main(void)
{
int result;
int num1, num2, num3;

printf("숫자1 :");
scanf("%d", &num1);
printf("숫자2 :");
scanf("%d", &num2);
printf("숫자3 :");
scanf("%d", &num3);

result=(num1-num2)*(num2+num3)*(num3%num1);
printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d", num1, num2, num2 ,num3, num3, num1, result);

}