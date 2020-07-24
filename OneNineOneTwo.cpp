#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    int answer = 0 ;

    cin >> n;
    int *arr = new int[n];
    int *dp = new int[n];
    

    for(int i=0; i<n; i++) cin >> arr[i];
    
    dp[0] = arr[0];
    answer = dp[0];

    for(int i=1; i<n; i++){
        dp[i] = max(dp[i-1] + arr[i], arr[i]); //Which is greater. The one which has added the next number or not.
        answer = max(answer, dp[i]); //If the original is greater than added number, then just use the original.
    }

    cout << answer;

    delete [] arr; //careful with the delete should be 'delete[] arr'
    delete [] dp;
    return 0;
}