#include <stdio.h>

int main()
{
int num1;
int num2;
int num3;
int num4;
char star[100][100];
int i, n=10;
int j;

while(1)
{
printf("원하는 별의개수:");
scanf("%d", &num1);
num2=num1;
num3=num1;
for(j=0; j<num1; j++)
{
for( i=num2; i<=num3; i++)
{
star[j][i]='*';
}
num2--;
}


for(j=0; j<num1; j++)
{
for( i=0; i<=num1; i++){
printf("%c", star[j][i]);
}
printf("\n");
}

for(j=0; j<=num1; j++)
{
for(i=0; i<=num1; i++)
{
 star[j][i]="\n";
}
}
}
}
