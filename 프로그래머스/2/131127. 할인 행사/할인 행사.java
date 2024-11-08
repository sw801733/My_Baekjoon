import java.util.*;

class Solution {
    public int solution(String[] want, int[] number, String[] discount) {
        int answer = 0;
        Map<String, Integer> wantMap = new HashMap<>();  

        
        for(int i = 0; i < want.length; i++) {
            wantMap.put(want[i], number[i]);
        }
        
        for(int i = 0; i <= discount.length - 10; i++) {
            Map<String, Integer> discountMap = new HashMap<>();  
            for(int j = i; j < i + 10; j++) {
                discountMap.put(discount[j], discountMap.getOrDefault(discount[j], 0) + 1);
            }
            int flag = 0;
            for(String w : want) {
                if (wantMap.get(w) > discountMap.getOrDefault(w, 0)) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                answer++;
        }
        
        return answer;
    }
}