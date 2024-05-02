#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> my_s;
    
    for(int i = 0; i < numbers.size() - 1; i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
            my_s.insert(numbers[i] + numbers[j]);
    }
    
    answer.assign(my_s.begin(), my_s.end());
    
    return answer;
}