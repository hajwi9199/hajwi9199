#include <stdio.h>

int main(void)
{
int num1, num4;
int num2=1;
int num3=1;
int num5=1;
int num6=1;
int num7=1;
int num8=1;
int num9=1;
while(1)
{
printf("출력할 * 의 개수");
scanf("%d", &num1);
if(num1%2==0)
{
printf("다시입력");
break;  //???
}
num4=num1;
num6=1;
num5=1;
num2=1;
num3=1;
num8=num1;

while(num2<num1)
{
num9=num5;
while(num5<=num1)
{
printf(" ");
num5++;
}
num5=num9;
num5--;
while(num3<=num4)
{
printf("*");
num3++;
}
printf("\n");
num3=1;
num6++;
num4-=2;
num2+=2;
}
num2=1;

num5--;

while(num2<=num1)
{
num9=num5;
while(num5<num8)
{
printf(" ");
num5++;
}
num5=num9;
num5++;
while(num3<=num2)
{
printf("*");
num3++;
}
num3=1;
printf("\n");
num2+=2;
}
}
}

