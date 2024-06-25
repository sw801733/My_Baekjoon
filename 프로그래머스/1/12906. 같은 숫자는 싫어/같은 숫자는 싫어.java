import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        ArrayList<Integer> temp = new ArrayList<>();
        
        int prev = -1;
        int index = 0;
        
        for(int num : arr) {
            if (num != prev)
            {
                temp.add(num);
            }
            prev = num;
        }
        
        int[] answer = new int[temp.size()];
        
        for(int num : temp)
            answer[index++] = num;
        
        
        return answer;
    }
}