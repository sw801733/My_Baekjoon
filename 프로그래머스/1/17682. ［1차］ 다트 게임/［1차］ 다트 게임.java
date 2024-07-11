class Solution {
    public int solution(String dartResult) {
        int answer = 0;
        int scoreIndex = -1;
        String strNum = "";
        int[] scores = new int[3];
        
        for(int i = 0; i < dartResult.length(); i++) {
            if (dartResult.charAt(i) >= '0' && dartResult.charAt(i) <= '9') {
                strNum += dartResult.charAt(i);
            }
            if (dartResult.charAt(i) == 'S') {
                scoreIndex++;
                scores[scoreIndex] = Integer.parseInt(strNum);
                strNum = "";
            }
            else if (dartResult.charAt(i) == 'D') {
                scoreIndex++;
                scores[scoreIndex] = Integer.parseInt(strNum) * Integer.parseInt(strNum);
                strNum = "";
            }
            else if (dartResult.charAt(i) == 'T') {
                scoreIndex++;
                scores[scoreIndex] = Integer.parseInt(strNum) * Integer.parseInt(strNum) * Integer.parseInt(strNum);
                strNum = "";
            }
            
            if (dartResult.charAt(i) == '*') {
                int temp = scoreIndex;
                if (temp >= 1)
                    scores[temp--] *= 2;
                scores[temp] *= 2;
                
            }
            else if (dartResult.charAt(i) == '#') {
                scores[scoreIndex] *= -1;
            }
        }
        
        for(int score : scores) {
            answer += score;
        }
        
        return answer;
    }
}