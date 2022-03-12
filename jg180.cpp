#include <vector>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int arr[101][101];
bool vistited[101];

int main()
{
    int n, m;
    int sum = 0;
    scanf("%d %d", &n, &m);
    for(int i =0; i<m; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    
    queue<int> q;
    vistited[1]=1;
    
    for(int i =1; i<=n;i++){
        if(arr[1][i]){
            vistited[i]=1;
            q.push(i);
        }
    }
    while(!q.empty()){
        int p = q.front();
        q.pop();
        sum++;
        for(int i =1; i<=n; i++){
            if(arr[p][i] && !vistited[i]){
                vistited[i]=1;
                q.push(i);
            }
        }
    }
    printf("%d\n", sum);

}