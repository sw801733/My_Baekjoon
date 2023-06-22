#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> my_v;

    string temp = "";

    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            my_v.push_back(stoi(temp));
            temp = "";
        }
        else
        {
            temp += s[i];
        }
            
    }
    my_v.push_back(stoi(temp));
    
    sort(my_v.begin(), my_v.end());
    
    answer += to_string(my_v.front()) + " ";
    answer += to_string(my_v.back());
    
    return answer;
}