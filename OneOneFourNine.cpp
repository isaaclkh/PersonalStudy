#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num;
    int dp[1001][3];
    int cost[1001][3];
    
    cin >> num;

    for(int i=1; i<=num; i++)
        scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);

    for(int i=1; i<=num; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i][2];
    }

    printf("%d\n", min(min(dp[num][0], dp[num][1]), dp[num][2]));

    return 0;
}