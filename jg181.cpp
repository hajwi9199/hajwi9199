#include<stdio.h>
#define SZ 1001
 
int N, M;
int arr[1001][1001];
int visited[1001] = { 0 };
int ans_cnt = 0;
 
 
void do_dfs(int v) {
    visited[v] = 1;
    for (int k = 1; k <= N; k++) {
        if (visited[k] == 0 && arr[v][k] == 1) {
            do_dfs(k);
        }
    }
}
 
void solution() {
    for (int i = 1; i <= N; i++) {
        if (visited[i] == 0) {
            ans_cnt++;
            do_dfs(i);
        }
    }
}
 
int main() {
    scanf("%d %d", &N, &M);
    int u, v;
    for (int i = 1; i <= M; i++) {
        scanf("%d %d", &u, &v);
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
 
    solution();
    for (int i = 1; i <= N; i++) {
        printf("%d ", visited[i]);
    }
    printf("%d", ans_cnt);
}