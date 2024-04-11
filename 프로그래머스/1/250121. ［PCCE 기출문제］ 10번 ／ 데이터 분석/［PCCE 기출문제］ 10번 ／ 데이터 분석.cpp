#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int str_to_index(string str)
{
    if (str == "code")
        return 0;
    else if (str == "date")
        return 1;
    else if (str == "maximum")
        return 2;
    else if (str == "remain")
        return 3;
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;

    int ext_index = str_to_index(ext);
    int sort_by_index = str_to_index(sort_by);
    
    for(vector<int> vec : data)
    {
        if (vec[ext_index] < val_ext)
            answer.push_back(vec);
    }
    
    sort(answer.begin(), answer.end(), 
         [sort_by_index](vector<int> a, vector<int> b) {
            return a[sort_by_index] < b[sort_by_index];     
         }
        );
    
    return answer;
}