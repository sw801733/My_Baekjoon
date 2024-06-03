#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    string str_answer = "";
    string temp = "";
    int answer = 0;
    
    string alphabet_check[10] = {"zero", "one", "two", "three", "four", "five", 
                                 "six", "seven", "eight", "nine"}; 
    

    
    for(char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            str_answer += c;
        }
        else
            temp += c;
        
        for(int i = 0; i < 10; i++)
        {
            if (alphabet_check[i] == temp)
            {
                str_answer += i + '0';
                temp = "";
            }
        }
    }
    
    answer = stoi(str_answer);
    
    return answer;
}