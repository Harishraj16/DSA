import java.util.Stack;

class Solution {
    public String reverseWords(String s) {
        if (s == null || s.isEmpty()) {
            return "";
        }

        // Split the string by one or more spaces
        String[] words = s.trim().split("\\s+");
        
        Stack<String> stack = new Stack<>();
        
        // Push words onto the stack
        for (String word : words) {
            stack.push(word);
        }
        
        StringBuilder result = new StringBuilder();
        
        // Pop words from the stack and append them to the result
        while (!stack.isEmpty()) {
            result.append(stack.pop());
            if (!stack.isEmpty()) {
                result.append(" ");
            }
        }
        
        return result.toString();
    }
}
