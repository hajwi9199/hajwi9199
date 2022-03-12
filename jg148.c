#include <stdio.h>

int main()
{
int N,M;
int num1[500];
int num2;
int i,j;
int check=0;

scanf("%d", &N);

for(i=0; i<N; i++)
{
scanf("%d", &num1[i]);
}

for(

scanf("%d", &M);

for(j=0;j<M;j++){
scanf("%d", &num2);
check=0;
for(i=0; i<N; i++){
if(num2==num1[i]){
printf("1 ");
check++;
i=N;
}
}
if(check==0)
{
printf("0 ");
}
}

}