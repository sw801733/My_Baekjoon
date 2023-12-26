#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
     while(!progresses.empty())
     {
         for (int i = 0; i < progresses.size(); i++)
         {
             progresses[i] += speeds[i];
         }
         
         int done_job = 0;
         int top_v = progresses[0];
         while(top_v >= 100)
         {
             done_job++;
             progresses.erase(progresses.begin());
             speeds.erase(speeds.begin());
             if (progresses.empty())
                break;
             top_v = progresses[0];
         }
         
         if (done_job)
            answer.push_back(done_job);
         
     }
    
    return answer;
}