#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    while(a != b)
    {
        answer++;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}