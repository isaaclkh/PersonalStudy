#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    long dp[n+1];

    dp[1] = 1;
    dp[2] = 1;

    for(int i=3; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];

    cout << dp[n] << endl;

    return 0;
}

/*#include <cstdio>
using namespace std;

int main()  {

    int n, i;
    scanf("%d", &n);

    long dp[n + 1];
    dp[1] = 1;
    dp[2] = 1;

    for (i = 3; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
    printf("%lld\n", dp[n]);

    return 0;
}*/