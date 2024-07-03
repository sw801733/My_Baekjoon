class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        
        
        for(int i = 0; i < n; i++) {    
            StringBuffer temp = new StringBuffer();
            int temp_num = arr1[i] | arr2[i];
            for(int j = 0; j < n; j++) {
                if (temp_num % 2 == 1)
                    temp.append('#');
                else
                    temp.append(' ');
                temp_num /= 2;
            }
            answer[i] = temp.reverse().toString();
            
        }
        
        return answer;
    }
}