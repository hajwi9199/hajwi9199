#include <stdio.h>

int main(void)
{
int num1=0;
int is=0;
int u=0;
while(is<5){
printf("숫자입력: ");
scanf("%d", &num1);
while(num1>0){
is++;
u+=num1;
num1=0;
}
}
printf("%d \n",u);
}