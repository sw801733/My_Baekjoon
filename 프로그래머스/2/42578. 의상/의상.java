import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        Map<String, Integer> map = new HashMap<>();

        // 각 종류별 옷 개수 저장
        for (String[] cloth : clothes) {
            map.put(cloth[1], map.getOrDefault(cloth[1], 0) + 1);
        }

        // 경우의 수 계산
        int answer = 1;
        for (int count : map.values()) {
            answer *= (count + 1);  // 각 종류마다 입지 않는 경우를 포함해 경우의 수 계산
        }

        // 모든 옷을 입지 않는 경우 제외
        return answer - 1;
    }
}
