#include <stdio.h>

int main()
{
int N,M;
int num1[500];
int num2[500];
int i,j;
int check=0;

scanf("%d", &N);

for(i=0; i<N; i++)
{
scanf("%d", &num1[i]);
}
scanf("%d", &M);

for(i=0; i<M; i++)
{
scanf("%d", &num2[i]);
}
for(j=0;j<M;j++){
check=0;
for(i=0; i<N; i++){
if(num2[j]==num1[i]){
printf("1 ");
check++;
}
}
if(check==0){
printf("0");
}
}
}