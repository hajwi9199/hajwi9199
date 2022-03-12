#include <stdio.h>

int main(void)
{
int num1, num2=0;
int num3;
int u=0;
int i;
while(1)
{
printf("숫자1 입력: ");
scanf("%d", &num1);
printf("숫자2 입력: ");
scanf("%d", &i);

if(num1<i){ u=num1; num1=i; i=u;}


for(num3=num1; num3>=i; num3--)
{
for(u=num3; u>=1; u--)
{
num2 = num3 * u;
printf("%d * %d = %d \n", num3 , u, num2);
}
printf("\n");
}
}
}
