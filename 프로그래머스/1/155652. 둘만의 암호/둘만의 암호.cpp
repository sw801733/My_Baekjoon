#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    map<char, int> check_skip;
    
    for(char alphabet : skip)
    {
        check_skip[alphabet] = 1;
    }
    
    for (char alphabet : s)
    {
        int i = 0;
        char temp = alphabet;
        while(i < index)
        {
            temp++;
            if (temp > 'z')
                temp = 'a';
            if (check_skip[temp] == 1)
            {
                continue;
            }
            i++;
        }
        answer += temp;
    }
    
    return answer;
}