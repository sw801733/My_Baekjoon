#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> my_s;
    int n_bit = 3;
    
    while(n >= n_bit)
    {
        my_s.push(n % n_bit);
        n /= n_bit;
    }
    
    if (n)
        my_s.push(n % n_bit);
    
    int temp = 1;
    while(!my_s.empty())
    {
        answer += my_s.top() * temp;
        temp *= 3;
        my_s.pop();
    }
    
    return answer;
}