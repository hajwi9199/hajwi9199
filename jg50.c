#include <stdio.h>

int main(void)
{
int num1;
char num2;
int num3;
int num4;
int num5;
int num6;

printf("학생의 영어점수:");
scanf("%d", &num3);
printf("학생의 수학점수:");
scanf("%d", &num4);
printf("학생의 국어점수:");
scanf("%d", &num5);

num1 = num3+num4+num5;
num6 = num1 / 3;
 
if(num6>=90)
num2 = 'A';
else if(num6>=80)
num2 = 'B';
else if(num6>=70)
num2 = 'C';
else if(num6>=50)
num2 = 'D';
else
num2 ='F';

printf("학생의 학점: %c", num2);
}
