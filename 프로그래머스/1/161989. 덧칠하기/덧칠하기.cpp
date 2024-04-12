#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int num = 0;
    
    for (int i = 0; i < section.size(); i++)
    {
        if (section[i] < num)
            continue;
        answer++;
        num = section[i] + m;
    }
    
    return answer;
}