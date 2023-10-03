#include <stdio.h>

int main(){
    int N;
    int v;

    scanf("%d", &N);

    int numbers[N];
    int count=0;

    for(int i=0; i<N; i++) scanf("%d", &numbers[i]);

    scanf("%d", &v);

    for(int i=0; i<N; i++){
        if(numbers[i] == v) count++;
    }

    printf("%d", count);
}