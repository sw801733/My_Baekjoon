class Solution {
    public String solution(int a, int b) {
        String answer = "";
        
        int[] monthCnt = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        String[] days = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
        
        int temp = 0;
        
        for(int i = 0; i < a - 1; i++) {
            temp += monthCnt[i];
        }
        
        
        temp += b - 1;
        temp %= 7;
    
        answer = days[temp];
        
        return answer;
    }
}