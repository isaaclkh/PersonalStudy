#include <stdio.h>

// A * B = 최대공약수 * 최소공배수
// 최소공배수 = A * B / 최대공약수
// 최대공약수 : 유클리드 호제법
// 유클리드 호제법이란, 두 정수 a, b에 대해, a를 b로 나눈 나머지인 r을 이용해,
// 최종적인 나머지가 0이 될때까지 위의 과정을 반복하는 것이다.
int GCD(int A, int B);

int main(){
    int count;
    int A, B;
    int gcd, lcd;

    scanf("%d", &count);

    for(int i=0; i<count; i++){
        scanf("%d %d", &A, &B);
        if(A == 1 || B==1) printf("%d\n", A == 1? B : A);
        
        else{
            gcd = GCD(A, B);
            lcd = (A * B) / gcd;
            printf("%d\n", lcd);
        }   
    }
}

int GCD(int A, int B){
    int remain;

    if(A > B) remain = A % B;
    else remain = B % A;

    if(remain == 0) return B;
    else return GCD(A, remain);

}