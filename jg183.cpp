#include <stdio.h>

int Fibo(int n, int b){
if(b==1){
return 1;
}
return Fibo(n,b-1) * Fibo(n,b-2);
}

int main(){
int A,B,C;

scanf("%d %d %d", &A, &B, &C);
printf("%d",Fibo(A,B)%C);
}