#include <string>
#include <vector>

using namespace std;



vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int height = wallpaper.size();
    int width  = wallpaper[0].length();
    
    int lux = 100;
    int luy = 100;
    int rdx = -1;
    int rdy = -1;
    
    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if (wallpaper[i][j] == '#')
            {
                lux = min(lux, i);
                luy = min(luy, j);
                rdx = max(rdx, i + 1);
                rdy = max(rdy, j + 1);
            }
        }
    }
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    
    return answer;
}