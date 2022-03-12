#include <stdio.h>

int main(void)
{
int a=0;
int num1, num2;
int b=0;
printf("숫자 1입력:");
scanf("%d", &num1);
printf("슷자 2입력:");
scanf("%d", &num2);
if(num1>num2){
for( a=num2; a<=num1; a++ )
{
b+=a;
}
}
printf("%d", b);
}