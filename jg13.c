#include <stdio.h>

int main(void)
{
int num1, num2;
int result;

printf("숫자1 :");
scanf("%d", &num1);
printf("숫자2 :");
scanf("%d", &num2);

result=num1+num2;
printf("%d + %d = %d \n",num1, num2, result);

result=num1-num2;
printf("%d - %d = %d \n",num1, num2, result);

result=num1*num2;
printf("%d * %d = %d \n",num1, num2, result);

result=num1/num2;
printf("%d / %d = %d \n",num1, num2, result);

result=num1%num2;
printf("%d %% %d = %d \n",num1, num2, result);

}