class Solution {
    
    public int cal(int row, int col, int [][]arr1, int[][] arr2) {
        int sum = 0;
        for(int i = 0; i < arr1[0].length; i++) {
            sum += arr1[row][i] * arr2[i][col];
        }
        return sum;
    }
    
    public int[][] solution(int[][] arr1, int[][] arr2) {
        int[][] answer = new int[arr1.length][arr2[0].length];
        
        for(int i = 0; i < answer.length; i++) {
            for(int j = 0; j < answer[0].length; j++) {
                answer[i][j] = cal(i, j, arr1, arr2);
            }
        }
        
        return answer;
    }
}