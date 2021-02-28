/*
문제 설명
주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 합니다. 숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 개수를 return 하도록 solution 함수를 완성해주세요.

제한사항
nums에 들어있는 숫자의 개수는 3개 이상 50개 이하입니다.
nums의 각 원소는 1 이상 1,000 이하의 자연수이며, 중복된 숫자가 들어있지 않습니다.
입출력 예
nums	result
[1,2,3,4]	1
[1,2,7,6,4]	4
입출력 예 설명
입출력 예 #1
[1,2,4]를 이용해서 7을 만들 수 있습니다.

입출력 예 #2
[1,2,4]를 이용해서 7을 만들 수 있습니다.
[1,4,6]을 이용해서 11을 만들 수 있습니다.
[2,4,7]을 이용해서 13을 만들 수 있습니다.
[4,6,7]을 이용해서 17을 만들 수 있습니다.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    //int answer = 0;
    char f,s,t;
    string temp;
    int f_n, s_n, t_n;
    int count=0;
    
    for(int i=0; i < skill_trees.size(); i++){
        
        f = skill.at(0);
        s = skill.at(1);
        t = skill.at(2);
        f_n=0; s_n=0; t_n=0;
        
        //int size=0;
        //size = skill_trees.at(i).size();
        
        temp = skill_trees.at(i);
        
        /*for(int k=0; k<size; k++){
            if(strcmp(temp.at(k),f)==0) f_n = k;
            if(strcmp(temp.at(k),s)==0) s_n = k;
            if(strcmp(temp.at(k),t)==0) t_n = k;
        }*/
        
        f_n=temp.find(f);
        s_n=temp.find(s);
        t_n=temp.find(t);
        
        if(f<s && s<t) count++;
    }
    
    return count;
    //return answer;
}