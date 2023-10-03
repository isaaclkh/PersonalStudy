#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n, ans = 0;
    int arr[10003] = {0,};
    int dp[10003] = {0,};

    cin >> n;

    for(int i=3; i < n+3; i++) cin >> arr[i];
    
    for(int i=3; i < n+3; i++){
        dp[i] = max(dp[i-3] + arr[i-1] + arr[i], dp[i-2] + arr[i]);
        dp[i] = max(dp[i-1], dp[i]); //2잔을 바로 다 마시지 않을 수 있기 때문에
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}