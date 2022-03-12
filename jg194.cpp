#include <stdio.h>

long long fibo(int n){
long long num[2] = {0, 1};
for (int i = 1 ; i < n; i++)
num[(i+1)%2] = (num[i%2] + num[(i-1)%2]) %1000000007;
return num[n%2];
}
int main(){
int n;
scanf("%d", &n);
printf("%lld", fibo(n));
}