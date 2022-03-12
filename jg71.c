#include <stdio.h>

void CeltoFah(int num1);
void FahToCel(int num1);

int main(void)
{
int num1, num2;
int num3;
while(1)
{
printf("1. 섭씨 입력 \n2. 화씨 입력 \n3. 종료 \n");
scanf("%d", &num3);

switch(num3)
{
case 3:
printf("프로그램 종료");
exit(0);
break;
case 1:
printf("섭씨 입력:");
scanf("%d", &num1);
printf("%d의 ", num1 );
CeltoFah(num1);
break;

case 2:
printf("화씨 입력:");
scanf("%d", &num1);
printf("%d의", num1);
FahToCel(num1);
break;

default : 
printf("1과 2가 아닌 다른 수입니다.\n");
break;
}
}
}
void CeltoFah(num1)
{
double num2;
num2 = num1 * 1.8 + 32;
printf(" 화씨의 섭씨 값: %f \n", num2);

}

void FahToCel(int num1)
{
double num2;
num2 = (num1 -32) / 1,8;
printf(" 섭씨의 화씨 값: %f \n", num2);
}
