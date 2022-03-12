#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
int num1, num2;
int num3[101][101]={0,};
int i,j;
int num4, num5;
int num6[101][101]={0,};
int num7;

srand( time(NULL) );



printf("행과열 입력:");
scanf("%d %d", &num1, &num2);

for(i=0;i<num1;i++)
{
for(j=0;j<num2;j++)
{
num3[i][j]=rand()%9;  //  rand() % ( (마지막값 - 처음값) + 1 ) + 처음값
                           //  rand() % ( ( 10 - 1 ) + 1 ) + 1;
//scanf("%d", &num3[i][j]);
printf("%2d", num3[i][j]);
}
printf("\n");
}


printf("두번째 행과열 입력:");
scanf("%d %d", &num4, &num5);

for(i=0;i<num1;i++)
{
for(j=0;j<num2;j++)
{
num6[i][j]=rand()%9;
// scanf("%d", &num6[i][j]);
printf("%2d", num6[i][j]);
}
printf("\n");
}


if(num1==num4)
{
if(num2==num5)
{
for(i=0;i<num1;i++)
{
for(j=0;j<num2;j++)
{
num7=num3[i][j]+num6[i][j];
printf("%3d", num7);
}
printf("\n");
}

}

}

if(num1==num4)
{
if(num2==num5)
{
for(i=0;i<num1;i++)
{
for(j=0;j<num2;j++)
{
num7=num3[i][j]-num6[i][j];
printf("%3d", num7);
}
printf("\n");
}

}

}
if(num1!=num4 || num2!=num5)
printf("계산 오류");

}