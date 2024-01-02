#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(vector<int> temp : commands)
    {
        vector<int> slice_v(array.begin() + temp[0] - 1, array.begin() + temp[1]);
        sort(slice_v.begin(), slice_v.end());
        answer.push_back(slice_v[temp[2] - 1]);
    }
    
    return answer;
}