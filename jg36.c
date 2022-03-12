#include <stdio.h>

int main(void)
{
int num1=0;
int cur=0;
int is=0;
int num2=0;
while(1){
printf("숫자1를 입력하시오:");
scanf("%d", &num1);
printf("숫자2를 입력하시오:");
scanf("%d", &num2);

if(num2<num1)
{
while(num2<=num1)
{
is=1;
while(is<10)
{
printf("%d*%d=%d \n", num2, is, num2*is);
is++;
}
num2++;
}
}
else if(num1<num2)
{
while(num1<=num2)
{
is=1;
while(is<10)
{
printf("%d*%d=%d \n", num1, is, num1*is);
is++;
}
num1++;
}
}
}
is=1;
cur=1;
}