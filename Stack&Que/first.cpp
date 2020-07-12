/*#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int front = 0;
    
    while(!(truck_weights.empty())){
        front += truck_weights.front();
        truck_weights.pop_back();
        
        if(front + truck_weights.front() <= weight){
            truck_weights.pop_back();
            answer += bridge_length;
        }
        
        answer += bridge_length;
    }
    
    return answer;
}*/

#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = bridge_length;
    int front = 0;
    int size = truck_weights.size();
    
    while(size){
        front = truck_weights.front();
        truck_weights.pop_back();
        
        if(front + truck_weights.front() <= weight){
            truck_weights.pop_back();
            answer+=1;
        }
        
        else answer += bridge_length;
        size--;
    }
    
    return answer;
}