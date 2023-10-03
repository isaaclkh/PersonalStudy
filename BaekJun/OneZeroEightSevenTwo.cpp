#include <iostream>
using namespace std;

int factorial(int n);

int main(void){
    int num;

    cin >> num;
    cout << factorial(num);
}

int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}