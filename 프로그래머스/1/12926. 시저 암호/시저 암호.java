class Solution {
    public String solution(String s, int n) {
        String answer = "";
        
        for(char c : s.toCharArray()) {
            if (c == ' ') {
                answer += c;
                continue;
            }
            
            char temp = 0;
           
            if (c >= 'a' && c <= 'z') {
                temp = (char)(c + n);
                if (temp > 'z')
                    temp = (char)(temp - 'z' + 'a' - 1);
            }
            
            if (c >= 'A' && c <= 'Z') {
                temp = (char)(c + n);
                if (temp > 'Z')
                    temp = (char)(temp - 'Z' + 'A' - 1);
            }
           
            answer += temp;
        }
        
        return answer;
    }
}