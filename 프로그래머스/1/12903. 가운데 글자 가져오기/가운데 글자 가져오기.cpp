#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int str_length = s.length();
    
    if (str_length % 2 == 1)
    {
        answer = s[str_length / 2];
    }
    else 
    {
        answer += s[str_length / 2 - 1];
        answer += s[str_length / 2];
    }
    
    return answer;
}