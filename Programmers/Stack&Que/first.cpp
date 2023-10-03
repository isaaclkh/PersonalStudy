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
} 
case1 okay, case2 & case3 fail
*/

/*#include <string>
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
            answer++;
        }
        
        else answer += bridge_length;
        size--;
    }
    
    return answer;
}
case1 fail, case2 & case3 okay
*/

/*
#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = bridge_length;
    int size = truck_weights.size();
    int front;
    int sum=0;
    
    vector<int> reversed;
    
    while (size){
        reversed.push_back(truck_weights.back());
        truck_weights.pop_back();
        size--;
    }
    
    size = reversed.size();
    
    while(size){
        front = reversed.back();
        sum += front;
        reversed.pop_back();
        
        if(sum <= weight){
            reversed.pop_back();
            answer++;
        }

        else{
            answer += bridge_length;
            sum = 0;
        }
        
        size--;
    }
    
    return answer;
}

case1 & case2 okay, case3 fail
*/

/*
#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = bridge_length;
    int size = truck_weights.size();
    int front;
    int sum=0;
    
    vector<int> reversed;
    
    while (size){
        reversed.push_back(truck_weights.back());
        truck_weights.pop_back();
        size--;
    }
    
    size = reversed.size();
    
    while(size){
        front = reversed.back();
        sum += front;
        reversed.pop_back();
        
        if(sum <= weight)  answer++;

        else{
            answer += bridge_length;
            sum = 0;
        }
        
        size--;
    }
    
    return answer;
}
case1 & case2 & case3 okay but still has a problem
-sum ==> has problem
*/