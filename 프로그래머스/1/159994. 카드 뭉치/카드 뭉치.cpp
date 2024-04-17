#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    queue<string> q_cards1;
    queue<string> q_cards2;
    
    for(string card1 : cards1) 
    {
        q_cards1.push(card1);
    }
    for(string card2 : cards2) 
    {
        q_cards2.push(card2);
    }
    
    for (string str : goal)
    {
        if (str == q_cards1.front())
            q_cards1.pop();

        else if (str == q_cards2.front())
            q_cards2.pop();
        else 
        {
            answer = "No";
            return answer;
        }
    }
    
    answer = "Yes";
    return answer;
}