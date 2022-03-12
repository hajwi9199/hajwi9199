#include <stdio.h>

int main(void)
{
int num1;

for(num1=1 ; num1<500 ; num1++)
{
if(num1%7==0 && num1%9==0)
printf("7과9의 공배수: %d \n", num1);
}
return 0;
}
