import java.util.*;

class Solution {
    public int[] solution(int N, int[] stages) {
        int[] answer = new int[N];
        int[] failStageCount = new int[N + 2];
        int players = stages.length;
        
        for(int stage : stages) {
            failStageCount[stage]++;
        }
        
        Map<Integer, Double> map = new HashMap<>();
        
        for(int i = 1; i < N + 1; i++) {
            if (failStageCount[i] == 0 || players == 0)
                map.put(i, 0.0);
            else
                map.put(i, (double) failStageCount[i] / (double) players);
            players -= failStageCount[i];
        }
        
        List<Integer> list = new ArrayList<>(map.keySet());
        list.sort((o1, o2) -> Double.compare(map.get(o2), map.get(o1)));
        
        return list.stream().mapToInt(i -> i).toArray();
    }
}