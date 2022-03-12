#include <stdio.h>

long cumulation(long number);

int main()
{
int num;

printf("1부터 n까지의 누적합을 구합니다. \n");
printf("n값을 입력하세요 : ");
scanf("%d", &num);

printf("1부터 %d까지의 합은 %ld입니다. \n", num, cumulation(num));
}

long cumulation(long number)
{
return number == 1 ? 1 : number + cumulation(number - 1);
}