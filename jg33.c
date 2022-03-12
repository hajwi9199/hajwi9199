#include <stdio.h>

int main(void)
{
int num1;
int y=0;
while(1){
printf("%d의 배수를 어디까지 출력 하시겠습니까:",3);
scanf("%d", &num1);
if(num1==0){break;}
while(y<num1)
{
y++;
printf("%d \n", 3*y);
}
y=0;
}
printf("프로그램이 종료됬습니다.");
}