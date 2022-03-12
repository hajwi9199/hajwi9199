#include <stdio.h>

int main(void)
{
int num1;
int y=0;
while(1)
{
printf("양수를 입력하시오.");
scanf("%d", &num1);
if(num1>=0){
if(num1==0){break;}
while(y<num1)
{
printf("HELLO WORLD! \n");
y++;
}
y=0;
}
}
printf("프로그램을 종료합니다.");
}