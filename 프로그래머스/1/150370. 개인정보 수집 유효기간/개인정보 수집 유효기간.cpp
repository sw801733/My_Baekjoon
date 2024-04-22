#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int year_to_day = 12 * 28 * stoi(today.substr(0, 4));
    int month_to_day = 28 * (stoi(today.substr(5, 2)) - 1);
    int total_day = year_to_day + month_to_day + stoi(today.substr(8, 2));
    
    map<char, int> term_value;
    
    for (string term : terms) 
    {
        stringstream ss(term);
        char t;
        int m;
        ss >> t >> m;
        term_value[term[0]] = m;
    }
    
    for (int i = 0; i < privacies.size(); i++)
    {
        int term_v = term_value[privacies[i].back()];
        int privacy_year_to_day = 12 * 28 * stoi(privacies[i].substr(0, 4));
        int privacy_month_to_day = 28 * (stoi(privacies[i].substr(5, 2)) - 1) + term_v * 28 - 1;
        int privacy_total_day = privacy_year_to_day +  privacy_month_to_day + stoi(privacies[i].substr(8, 2));
        // cout << privacy_total_day << "\n";
        
        if (total_day > privacy_total_day)
            answer.push_back(i + 1);
    }
    

    return answer;
}
