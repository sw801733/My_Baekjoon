import java.util.*;

class Solution {
    int answer = 0;
    boolean[] visited;
    
    public int solution(int k, int[][] dungeons) {
        visited = new boolean[dungeons.length];
        dfs(0, k, dungeons);
        
        return answer;
    }
    
    public void dfs(int depth, int k, int[][] d) {
        for(int i = 0; i < d.length; i++) {
            if (visited[i] || d[i][0] > k) continue;
            visited[i] = true;
            dfs(depth + 1, k - d[i][1], d);
            visited[i] = false;
        }
        answer = Math.max(depth, answer);
    }
}