﻿#include <stdio.h>

int main(void)
{
int num;

while(1)
{
printf("1이상 5이하의 정수 입력:");
scanf("%d", &num);

switch(num)
{


case 0:
printf("프로그램을 종료합니다. \n"); exit(0);
break;
case 1:
printf("1은 ONE \n");
break;

case 2:
printf("2은 TWO \n");
break;

case 3:
printf("3은 THREE \n");
break;
case 4:
printf("4은 FOUR \n");
break;
case 5:
printf("5은 FIVE \n");
break;
default:
printf("I don't know! \n");//예외처리
break;
}
}
}
