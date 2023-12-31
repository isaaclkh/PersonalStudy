#include <stdio.h>
#define MAX 9

int n, m;
int arr[MAX] = {0,};
int visited[MAX] = {0,};

void dfs(int cnt);

int main() {
    scanf("%d %d", &n, &m);
    dfs(0);
}

void dfs(int cnt)
{
    if(cnt == m){
        for(int i = 0; i < m; i++) printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for(int i = 1; i <= n; i++){
        visited[i] = 1;
        arr[cnt] = i;
        dfs(cnt+1);
        visited[i] = 0;
    }
}