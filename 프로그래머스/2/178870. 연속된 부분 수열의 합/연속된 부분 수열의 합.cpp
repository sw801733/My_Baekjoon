#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    int start = 0;
    int end = 0;
    int sum = 0;
    int seq_size = sequence.size();
    
    
    for(int i = 0; i < seq_size; i++)
    {
        end = i;
        sum += sequence[end];
        
        while(sum > k)
            sum -= sequence[start++];
        
        if (sum == k)
        {
            if (answer.empty() || end - start < answer[1] - answer[0])
                answer = {start, end};
        }
        
    }
    
    
    return answer;
}