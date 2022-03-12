#include <stdio.h>

void print_back();

int main()
{
printf("문자열을 입력하세요 : ");
printf_back();
printf("\n");
}

void print_back()
{
int ch;
if((ch = getchar()) != '\n')
{
print_back();
}
putchar(ch);
}