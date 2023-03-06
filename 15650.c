#include <stdio.h>
#define MAX 9

int n, m;
int arr[MAX] = {0,};
int visited[MAX] = {0,};

void dfs(int num, int cnt);

int main() {
    scanf("%d %d", &n, &m);
    dfs(1,0);
}

void dfs(int num, int cnt)
{
    if(cnt == m){
        for(int i = 0; i < m; i++) printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for(int i = num; i <= n; i++){
        if(!visited[i])
        {
            visited[i] = 1;
            arr[cnt] = i;
            dfs(i+1,cnt+1);
            visited[i] = 0;
        }
    }
}