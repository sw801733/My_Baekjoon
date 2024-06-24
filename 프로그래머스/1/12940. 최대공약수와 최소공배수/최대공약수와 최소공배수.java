class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        
        int gcd, lcm;
        int temp_n = n;
        int temp_m = m;
        int temp;
        
        while(temp_m != 0) {
            temp = temp_n % temp_m;
            temp_n = temp_m;
            temp_m = temp;
        }
        
        gcd = temp_n;
        lcm = (n * m) / gcd;
        
        answer[0] = gcd;
        answer[1] = lcm;
        
        return answer;
    }
}