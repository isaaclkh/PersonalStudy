#include <cstdio>
#include <iostream>

using namespace std;

int main(){

    int num;
    int arr[1001] = {1,2};

    for(int i=2; i<1001; i++) arr[i] = (arr[i-1] + arr[i-2]) % 10007;

    cin >> num;

    printf("%d", arr[num-1]);

    return 0;

}