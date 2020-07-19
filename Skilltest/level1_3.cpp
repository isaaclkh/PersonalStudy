/*
문제 설명
함수 solution은 정수 n을 매개변수로 입력받습니다. n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요. 예를들어 n이 118372면 873211을 리턴하면 됩니다.

제한 조건
n은 1이상 8000000000 이하인 자연수입니다.
입출력 예
n	return
118372	873211
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> arrange;
    int temp2;
    
    for(int i=0; n!=0 ;i++){
        arrange.push_back(n % 10);
        n /= 10;
    }

    int size = arrange.size();
    
    /*for(int i=0; i<size; i++){ 
        for(int j=0; j<(size-1)-i; j++){ 
            if(arrange[j] > arrange[j+1]){ 
                temp2 = arrange[j];
                arrange[j] = arrange[j+1]; 
                arrange[j+1] = temp2;
            } 
        }
    }*/
    
    sort(arrange);
    
    while(size){
        if(answer!=0) answer *= 10;
        answer = arrange.back();
        arrange.pop_back();
        size--;
    }
    
    return answer;
}