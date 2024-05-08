#include <vector>
#include <iostream>
using namespace std;

bool is_prime(int n)
{ 
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 1)
        return true;
    else
        return false;
}

int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                if (is_prime(nums[i] + nums[j] + nums[k]))
                    answer++;
            }
        }
    }

    return answer;
}