#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> positions;
    
    for(int i = 0; i < players.size(); i++)
    {
        positions[players[i]] = i; 
    }
    
    for(string calling : callings)
    {
        int pos = positions[calling];
        swap(players[pos], players[pos - 1]);
        positions[players[pos]] = pos;
        positions[players[pos - 1]] = pos - 1;
    }
    
    answer = players;
    
    return answer;
}