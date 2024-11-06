class Solution {
    public String solution(int[] numbers, String hand) {
        String answer = "";
        
        int left = 10;
        int right = 12;
        
        for(int n : numbers) {
            if (n == 1 || n == 4 || n == 7) {
                answer += 'L';
                left = n;
            } else if (n == 3 || n == 6 || n == 9) {
                answer += 'R';
                right = n;
            } else {
                if (n == 0)
                    n = 11;
                
                int left_x = (left - 1) / 3;
                int left_y = (left - 1) % 3;
                int right_x = (right - 1) / 3;
                int right_y = (right - 1) % 3;
                int n_x = (n - 1) / 3;
                int n_y = (n - 1) % 3;
                
                int leftDistance = Math.abs(left_x - n_x) + Math.abs(left_y - n_y);
                int rightDistance = Math.abs(right_x - n_x) + Math.abs(right_y - n_y);
                
                if (leftDistance < rightDistance) {
                    answer += 'L';
                    left = n;
                } else if (leftDistance > rightDistance) {
                    answer += 'R';
                    right = n;
                } else {
                    if (hand.equals("left")) {
                        answer += 'L';
                        left = n;
                    } else {
                        answer += 'R';
                        right = n;
                    }
                }
            }
        }
    
        return answer;
    }
}