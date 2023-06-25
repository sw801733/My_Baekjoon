#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> my_s;
    
    for(int i = 0; i < s.length(); i++)
    {
        if (my_s.size() == 0 && s[i] == ')')
        {
            cout << "0";
            return 0;
        }
        if (s[i] == '(')
        {
            my_s.push(s[i]);
        }
        else if (s[i] == ')')
        {
            my_s.pop();
        }
    }
    
    if (my_s.size() == 0)
        answer = true;
    else
        answer = false;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}