#include <string>
#include <vector>

using namespace std;

int cal_one_cnt(int n)
{
    int one_cnt = 0;
    while(n > 0)
    {
        if (n % 2 == 1)
            one_cnt++;
        n /= 2;
    }
    return one_cnt;
    
}

int solution(int n) {
    int answer = 0;
    
    int N_one_cnt = cal_one_cnt(n);
    
    int next_max;
    while(1)
    {
        next_max = ++n;
        if (N_one_cnt == cal_one_cnt(next_max))
        {
            answer = next_max;
            break;
        }
        
    }
    
    return answer;
}