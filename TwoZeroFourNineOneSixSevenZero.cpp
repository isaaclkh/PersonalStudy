#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int howmany, num;
    int arr[41] = {0, 1, 1};

    for(int i=3; i<41; i++) arr[i] = arr[i-1] + arr[i-2]; 

    cin >> howmany;

    for(int i=0; i<howmany; i++){
        cin >> num;
        if(num==0) cout << "1 0" << endl;
        else if(num==1) cout << "0 1" << endl;
        else printf("%d %d\n", arr[num-1], arr[num]);
    }

    return 0;
}