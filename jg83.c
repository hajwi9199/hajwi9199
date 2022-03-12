#include <stdio.h>

int main()
{
int num1, num2, num3, num5, num6;
int num7;
int num8=90;
int num9=41;
int num10;
int j;
int num4[100];
int i;
while(1)
{
printf("1.성적 조회\n");
printf("2.종료\n");
scanf("%d", &num1);
num8 = 90;
num9 = 41;

switch(num1)
{
case '1':
printf("1. 학번으로검색\n");
printf("2. 이름으로 검색\n");
printf("3. 상위메뉴로 가기\n");
printf("4. 종료\n");
scanf("%d", &num2);

switch(num2)
{
case '1':
printf("학번입력:");
scanf("%d", &num3);
for(i=0; i<3; i++)
{
scanf("%d", &num4[i]);
num5 += num4[i];
}
num6= num5 / i;
num10 =num6;
for(j=0; j<6; j++)
{
if(num10>=num8)
{
num7 = num9;
}
num10-=10;
num8-=10;
num9++;
}

printf("학번:%d", num3);
for(i=0; i<3; i++)
{
printf(" %d", num4[i]);
}
printf(" %d", num5);
printf(" %d", num6);
printf(" %c학점", num7);

case '2':
quit(0);
}
}
}
}