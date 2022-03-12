#include <stdio.h>

int main(void)
{
int num1=0;//554852552+3
int y=0;
int u=0;
int t=0;
while(1){
printf("계속더할 숫자를 적으시오:");
scanf("%d", &num1);
if(num1==0){break;}
while(u<num1){
printf("%d \n",  y += 3);
 t += y;
u++;
}
u=0;
printf("3~ %d의 사이에 있는 3의 배수 합은%d \n", y, t );
y=0;
t=0;
}
printf("프로그램을 종료합니다");
}