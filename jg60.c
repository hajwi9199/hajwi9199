#include <stdio.h>

int main(void)
{
int num1[24]={""};
int num2;
int i;
int u;
printf("부를 횟수:");
scanf("%d", &num2);
for(i=1; i<=num2; i++)
{
scanf("%d", &u);
num1[u]=num1[u]+1;
}
for(i=1; i<=23; i++)
{
printf("%d", num1[i]);
}
}