#include <string>
#include <vector>


using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int str_len = t.length();
    int sub_str_len = p.length();
    long long num_p = stol(p);
    
    for(int i = 0; i <= str_len - sub_str_len; i++)
    {
        string temp = t.substr(i, sub_str_len);
        if (stol(temp) <= num_p)
            answer++;
    }
    
    return answer;
}