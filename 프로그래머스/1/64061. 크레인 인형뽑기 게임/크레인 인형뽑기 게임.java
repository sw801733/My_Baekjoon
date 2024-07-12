import java.util.*;

class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        int boardSize = board[0].length;

        
        Stack<Integer> stk = new Stack<>();
        
        for(int move : moves) {
            
            int dollNum = 0;
            for(int i = 0; i < boardSize; i++) {
                dollNum = board[i][move - 1];
                if (dollNum != 0) {
                    board[i][move - 1] = 0;
                    break;
                }
            }
            
            if (dollNum != 0) {
                if (stk.isEmpty() == true || stk.peek() != dollNum) {
                    stk.push(dollNum);
                }
                
                else {
                    if (stk.peek() == dollNum) {
                        stk.pop();
                        answer += 2;
                    }
                }
                
            }
            
        }
        
        
        return answer;
    }
}