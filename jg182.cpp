#include <stdio.h>

int Fibo(int n){
if(n==0){
return 0;
}
if(n==1){
return 1;
}
return n=Fibo(n-2) + Fibo(n-1);
}

int main(){
int N;

scanf("%d", &N);
printf("%d",Fibo(N));
}