#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);           
    string buffer;                      
 
    vector<string> result;
 

    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               
    }
 
    return result;
}

string solution(string s) {
    string answer = "";
    s[0] = toupper(s[0]);
    for(int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == ' ')
            s[i + 1] = toupper(s[i + 1]);
        else
            s[i + 1] = tolower(s[i + 1]);
    }
    answer = s;
    return answer;
}