#include <stdio.h>
 
int main() {
int num1[11] = { 0 };
int i;
int T, N;
num1[1] = 1;
num1[2] = 2;
num1[3] = 4;

 

for (i = 4; i < 11; i++)
{
num1[i] = num1[i - 1] + num1[i - 2] + num1[i - 3];
}
 

scanf("%d", &T);
 

for (i = 0; i< T; i++) {
scanf("%d", &N);
printf("%d\n", num1[N]);
} 
return 0;
}


//5 1+1+1+1+1==1개  , 1=3개 2=1개 == 총 4개 1=1개 2=2개 == 총 3개 3=1개 1=2개 == 3개 3=1개 2=1개 == 총 2개
//총13개
//1만 있고 그다음 2를 차근히 올리고 다음은 3을 차근히
