#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int cnt_p = 0;
    int cnt_y = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'p' || s[i] == 'P')
            cnt_p++;
        
        if (s[i] == 'y' || s[i] == 'Y')
            cnt_y++;
    }
    
    if (cnt_p == cnt_y)
        answer = true;
    else
        answer = false;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}