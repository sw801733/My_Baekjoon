#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int cnt = 0;
    map<int, int> m;
    vector<int> v;
    
    for(int t : tangerine) {
        m[t]++;
    }
    
    for(auto i : m) {
        v.push_back(i.second);
    }
    
    sort(v.begin(), v.end(), greater<int>());
    
    for(int n : v) {
        if(cnt >= k)
            break;
        answer++;
        cnt += n;
    }

    
    return answer;
}