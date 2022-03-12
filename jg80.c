#include <stdio.h>

int main()
{
int num1;
int num2;
char star[100][100];
int i, n=10;
int j;

while(1)
{
printf("원하는 별의개수:");
scanf("%d", &num1);
num2 = num1;
for(j=0; j<num1; j++)
{
for( i=num2; i<=num1; i++)
{
star[j][i]='*';
}
num2--;
}
num2=num1;
for(j=0; j<num1; j++)
{
for( i=num2; i<=num1; i++)
{
printf("%c", star[j][i]);
}
num2--;
printf("\n");
}
num2=num1;
for(j=0; j<num1; j++)
{
for( i=num2; i<=num1; i++)
{
 star[j][i]="\0";
}
num2--;
}
}
}
