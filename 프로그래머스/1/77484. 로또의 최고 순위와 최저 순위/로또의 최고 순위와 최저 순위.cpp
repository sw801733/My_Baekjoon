#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cal_rank(int num)
{
    if (num == 6)
        return 1;
    else if (num == 5)
        return 2;
    else if (num == 4)
        return 3;
    else if (num == 3)
        return 4;
    else if (num == 2)
        return 5;
    else
        return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int max_num = 0;
    int min_num = 0;
    for(int i = 0; i < lottos.size(); i++)
    {
        if (lottos[i] == 0)
            max_num++;
        
        if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
            min_num++;
            
    }
    
    max_num += min_num;
    
    answer.push_back(cal_rank(max_num));
    answer.push_back(cal_rank(min_num));
    
    
    return answer;
}