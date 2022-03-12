#include <stdio.h>

int main(void)
{
int num1;
int y=2;


while(num1 != 0){
printf("원하는 구구단을 입력하시오:");
scanf("%d", &num1);//3 4 0

if(num1==0){break;}
while(y<10){
printf("%d*%d = %d\n", num1,y, num1*y);
y++;
}
y=2;
}

printf("프로그램을 종료합니다. "); exit(0);

}