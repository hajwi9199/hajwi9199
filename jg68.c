#include <stdio.h>

int NumberCompare(int num1, int num2, int num3);

int main(void)
{
int num1, num2, num3;
printf("정수 세 개 입력:");
scanf("%d %d %d", &num1, &num2, &num3);
printf("%d %d %d 중 가장 큰수: %d \n", num1, num2, num3, NumberCompare(num1, num2, num3));
return 0;
}
int NumberCompare(int num1, int num2, int num3)
{
if(num1>num2){ if(num1>num3){ return num1;  } else {return num3;}}

else if(num2>num3) {return num2;}
else {return num3;}
}

