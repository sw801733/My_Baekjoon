#include <string>
#include <vector>

using namespace std;

int dh[4] = {0, 1, -1, 0};
int dw[4] = {1, 0, 0, -1};


int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    int board_size = board.size() - 1;
    int count = 0;
    
    for (int i = 0; i < 4; i++)
    {
        int h_check = h + dh[i];
        int w_check = w + dw[i];
        
        if (h_check >= 0 && h_check <= board_size && w_check >= 0 && w_check <= board_size)
        {
            if (board[h][w] == board[h_check][w_check])
                count++;
        }
    }
    
    answer = count;
    
    return answer;
}