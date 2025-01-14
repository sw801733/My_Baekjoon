class Solution {
    public String solution(String s) {
        String answer = "";
        String[] strArr = s.split("");
        
        int cnt = 0;
        for(String str : strArr) {
            if (cnt % 2 == 0)
                str = str.toUpperCase();
            else
                str = str.toLowerCase();
            
            if (str.equals(" "))
                cnt = -1;
            
            cnt++;
            answer += str;
        }

        return answer;
    }
}