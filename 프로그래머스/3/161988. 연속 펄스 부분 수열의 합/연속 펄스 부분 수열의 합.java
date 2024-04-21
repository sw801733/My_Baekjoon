class Solution {
    public long solution(int[] sequence) {
        long answer = 0;
        int sequenceLength = sequence.length;
        int pulse = 1;
        
        long[] dp1 = new long[sequenceLength]; 
        long[] dp2 = new long[sequenceLength]; 
        
        dp1[0] = pulse * sequence[0];
        dp2[0] = -pulse * sequence[0];
        
        answer = Long.max(dp1[0], dp2[0]);
        
        for (int i = 1; i < sequenceLength; i++) {
            
            pulse *= -1;
            dp1[i] = Long.max(pulse * sequence[i], pulse * sequence[i] + dp1[i - 1]);
            dp2[i] = Long.max(-pulse * sequence[i], -pulse * sequence[i] + dp2[i - 1]);
            
            long max_dp = Long.max(dp1[i], dp2[i]);
            answer = Long.max(max_dp, answer);
        }
        
        return answer;
    }
}