#include <stdio.h>

int main(void)
{
int num1=1;
int num2=1;
int num3=1;
int num4=1;
int num5=1;
int num6=1;
int i=1;
int k=1;
int j=1;
int y;
int u;
int o;

while(1)
{
num1=1;
num2=1;
num3=1;
num4=1;
num5=1;
num6=1;
i=1;
k=1;
j=1;
printf("출력할 * 개수:");
scanf("%d", &num1);
num6=num1;
k=num1 * 4;

while(num2<=num1)
{

while(num3<=num2)
{
printf("*");
num3++;
}
num3=1;

while(num4<num6)
{
printf(" ");
num4++;
}
num4=1;

while(num4<num6)
{
printf(" ");
num4++;
}
num4=1;

while(num5<=i)
{
printf("*");
num5++;
}
num5=1;
i+=2;

while(num4<num6)
{
printf(" ");
num4++;
}
num4=1;

while(num4<num6)
{
printf(" ");
num4++;
}
num4=1;

while(num3<=num2)
{
printf("*");
num3++;
}
num3=1;

num6--;
printf("\n");
num2++;
}
while(j<k)
{
printf("*");
j++;
}
printf("\n");
}

}


