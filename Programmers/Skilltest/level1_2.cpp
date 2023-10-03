#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int size = seoul.size();
    string temp;
    
    for(int i=0; i<size ; i++) {
        if(seoul[i]=="Kim") {
            temp = to_string(i);
            answer = "김서방은 " + temp + "에 있다";
            break;
        }
    }
    
    return answer;
}