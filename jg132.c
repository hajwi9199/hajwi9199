#include <stdio.h>
 int main(void) 
{ 
int a, b, c, i, j; 

int num1[15][15] = {0, }; 

for(i = 0; i < 15; i++) 
{
num1[0][i] = i;  // 1층 저장
}

for(i = 1; i < 15; i++)
{
for(j = 1; j < 15; j++) 
{
num1[i][j] = num1[i-1][j] + num1[i][j-1]; //                          1   2   3   ->  3  6 = (1+2)옆칸+3
}
}
scanf("%d", &a); 

for(i = 0; i < a; i++)
{ 
scanf("%d %d", &b, &c); 
printf("%d\n", num1[b][c]); 
} 
return 0; 
}

