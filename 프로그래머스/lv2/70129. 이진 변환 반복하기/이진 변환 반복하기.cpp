#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int erase_cnt = 0;
    int bin_cnt = 0;
    while (s != "1")
    {

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                s.erase(i, 1);
                erase_cnt++;
                i = -1;
            }
        }

        int str_length = s.length();
        string temp = "";
        while (str_length > 0)
        {
            temp += to_string(str_length % 2);
            str_length /= 2;
        }
        bin_cnt++;
        s = temp;
    }
    answer.push_back(bin_cnt);
    answer.push_back(erase_cnt);
    
    return answer;
}