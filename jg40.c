#include <stdio.h>

int main(void)
{
int u=0; 
int i=0;
int num1=0;
while(1)
{
printf("숫자 입력: ");
scanf("%d", &num1);
while(u<num1)
{
while(i<u)
{
printf("o ");
i++;
}
i=0;
printf("*\n");
u++;
}
u=0;
}
}