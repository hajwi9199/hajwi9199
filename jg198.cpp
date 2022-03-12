#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
int N;
int dp[31];
scanf("%d", &N);
dp[0] = 1;
dp[2] = 3;
if(N % 2 == 1)
dp[N] = 0;
else{
for(int i = 4; i <= N; i += 2){
dp[i] = 3 * dp[i-2];
for(int j = 4; j <= i; j += 2){
dp[i] += 2 * dp[i - j];
}
}
}
printf("%d\n", dp[N]);
return 0;
}