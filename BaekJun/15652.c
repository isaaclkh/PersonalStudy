#include <stdio.h>

int n, m;
int result[1000];

void dfs(int depth, int cut)
{
    int i;

    if (depth == m){
        for (int i = 0; i < m; i++)
            printf("%d ", result[i]);
        printf("\n");
    }

    else{
        for (i = 1; i <= n; i++){
            if (cut <= i){
                result[depth] = i;
                dfs(depth + 1, i);
            }
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &m);
    dfs(0, 0);
    return 0;
}