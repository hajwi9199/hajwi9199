#include <stdio.h>

int main(void)
{
int num1;

printf("알파벳 입력: ");
scanf("%c", &num1);

printf("알파벳의 아스키코드: %d", num1);
return 0;
}