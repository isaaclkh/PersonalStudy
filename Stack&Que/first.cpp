#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int front;
    
    while(!(truck_weights.empty())){
        front = truck_weights.front();
        truck_weights.pop_back();
        
        while(front + truck_weights.front() <= weight){
            truck_weights.pop_back();
            answer += bridge_length;
        }
        
        answer += bridge_length;
    }
    
    return answer;
}