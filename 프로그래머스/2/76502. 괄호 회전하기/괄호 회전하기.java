import java.util.*;
import java.io.*;

class Solution {
    public int solution(String s) {
        int answer = 0;
        
        for(int i = 0; i < s.length(); i++) {
            Stack<Character> stack = new Stack<>();
            
            for(char c : s.toCharArray()) {
                if (stack.isEmpty()) {
                    stack.push(c);
                    continue;
                }
                
                char top = stack.peek();
                if (top == '[' && c == ']')
                    stack.pop();
                else if (top == '(' && c == ')')
                    stack.pop();
                else if (top == '{' && c == '}')
                    stack.pop();
                else
                    stack.push(c);
            }   
            if (stack.isEmpty())
                answer++;
            s = s.substring(1) + s.charAt(0);
        }
        
        
        return answer;
    }
}