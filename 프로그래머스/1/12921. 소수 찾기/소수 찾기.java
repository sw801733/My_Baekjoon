class Solution {
    public int solution(int n) {
        int answer = 0;
        
        if (n >= 2)
            answer++;
        if (n >= 3)
            answer++;
        
        for(int i = 4; i <= n; i++) {
            
            int flag = 1;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                answer++;
        }
        
        return answer;
    }
}