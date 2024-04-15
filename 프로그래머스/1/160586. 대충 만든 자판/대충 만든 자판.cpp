#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> alphabet_press_cnt;
    
    for(string str : keymap)
    {
        for(int i = 0; i < str.size(); i++)
        {
            if (alphabet_press_cnt[str[i]] == 0)
                alphabet_press_cnt[str[i]] = i + 1;
            else
                alphabet_press_cnt[str[i]] = min(alphabet_press_cnt[str[i]], i + 1);
        }
    }
    

    for (string target : targets)
    {
        int sum = 0;
        int flag = 0;
        for(int i = 0; i < target.size(); i++)
        {
            if (alphabet_press_cnt[target[i]] == 0)
            {
                sum = -1;
                break;
            }
            sum += alphabet_press_cnt[target[i]];
        }
            answer.push_back(sum);
    }
    
    
    return answer;
}