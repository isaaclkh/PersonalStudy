#include <stdio.h>
#include <stdlib.h>

void dfs(int count, int m, int n);
int arr[9] = {0,};
int visited[9] = {0,};

int main(){
    int n,m;

    scanf("%d %d", &n, &m);

    dfs(0, m, n);
}

void dfs(int count, int m, int n){
    if(count == m){
        for(int i=0; i<m; i++) printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            visited[i] = 1;
            arr[count] = i;
            dfs(count+1, m, n);
            visited[i] = 0;
        }
    }
}