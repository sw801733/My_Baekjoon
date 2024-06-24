#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int min_w = 0;
    int min_h = 0;
    
    for(int i = 0; i < sizes.size(); i++)
    {
        min_w = max(min_w, min(sizes[i][0], sizes[i][1]));
        min_h = max(min_h, max(sizes[i][0], sizes[i][1]));  
    }
    
    answer = min_w * min_h;
    
    
    
    return answer;
}