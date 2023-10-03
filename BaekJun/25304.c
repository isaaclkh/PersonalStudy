#include <stdio.h>

int main(){
    int X;
    int count;
    int sum=0, temp, tempCount;

    scanf("%d", &X);
    scanf("%d", &count);

    for(int i=0; i<count; i++){
        scanf("%d %d", &temp, &tempCount);
        sum += temp * tempCount;
    }

    if(sum == X) printf("Yes");
    else printf("No");
}