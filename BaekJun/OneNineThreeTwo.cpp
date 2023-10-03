#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n, answer=0;
    int dp[500][500]={0};

    cin >> n;
    
    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++) cin >> dp[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0) dp[i][j] = dp[i-1][0] + dp[i][j];
            else if(j==i) dp[i][j] = dp[i-1][j-1] + dp[i][j];
            else dp[i][j] = max(dp[i-1][j-1] + dp[i][j], dp[i-1][j] + dp[i][j]);

            answer = max(answer, dp[i][j]);
        }
    }

    cout << answer;
}

//https://sihyungyou.github.io/baekjoon-1932/

//양 끝에의 값들은 현재 값에서 더해주기
//가운데 중복되는 것은 그 어느 것이 더 큰지 그리고 그 더 큰 값을 현재 값으로 설정