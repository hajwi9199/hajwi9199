#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;

int n, m, v, a, b;

bool num1[1010][1010], check[1010], check2[1010];
queue<int> q;

void dfs(int v){
printf("%d ", v);
check[v] = 1;
for (int i = 1; i <= n; i++) {
if (!check[i] && num1[v][i]) {
check[i] = 1;
dfs(i);
}
}
}

void bfs(int a) {
q.pop();
printf("%d ", a);
for(int i=1; i<=n; i++){
if(num1[a][i]==1&& !check2[i]){
check2[i]=1;
q.push(i);
}
}
if(q.empty()){
return;
}
else bfs(q.front());
}

int main() {
scanf("%d%d%d", &n, &m, &v);

for (int i = 1; i <= m; i++) {
scanf("%d %d", &a, &b);
num1[a][b] = 1;
num1[b][a] = 1;
}
q.push(v);
check[v]=1;
check2[v]=1;
dfs(v);
printf("\n");
bfs(q.front());
}