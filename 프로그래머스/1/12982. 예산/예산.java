import java.util.Arrays;

class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        int sum = 0;
        
        Arrays.sort(d);
        
        for(int num : d) {
            sum += num;
        
            if (sum > budget)
                break;
            answer++;
        }
        
        return answer;
    }
}