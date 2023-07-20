#include <string>
#include <vector>

using namespace std;

int lcm (int n, int m)
{
    int re = n * m;
    
    int temp;
    
    while(m != 0)
    {
        temp = n % m;
        n = m;
        m = temp;
    }
    
    re = re / n;
    
    return re;
    
}

int solution(vector<int> arr) {
    int answer = 0;
    
    while(arr.size() > 1)
    {
        arr[0] = lcm(arr[0], arr[1]);
        arr.erase(arr.begin() + 1, arr.begin() + 2);
    }
    
    answer = arr[0];
    
    return answer;
}