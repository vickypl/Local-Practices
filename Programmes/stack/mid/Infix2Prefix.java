import java.util.*;

public class Infix2Prefix {
	
	public static void main(String[] args) {
		
		String str = "A+B-C";
		StringBuilder strBuilt = new StringBuilder(str).reverse();
		str=strBuilt.toString();
		
		String ans = infixToPostfix(str);
		StringBuilder strAns = new StringBuilder(ans).reverse();
		System.out.println(strAns);

		

	}

    static int Prec(char ch) 
    { 
        switch (ch) 
        { 
        case '+': 
        case '-': 
            return 1; 
       
        case '*': 
        case '/': 
            return 2; 
       
        case '^': 
            return 3; 
        } 
        return -1; 
    } 
       
    static String infixToPostfix(String exp) { 
 
        String result = new String(""); 
        Stack<Character> stack = new Stack<>(); 
          
        for (int i = 0; i<exp.length(); ++i) { 
            char c = exp.charAt(i); 
              
            if (Character.isLetterOrDigit(c)) 
                result += c; 
			else if (c == '(') 
                stack.push(c); 
			else if (c == ')') { 
                while (!stack.isEmpty() && stack.peek() != '(') 
                    result += stack.pop(); 
                  
                    stack.pop(); 
            } else { 
                while (!stack.isEmpty() && Prec(c) <= Prec(stack.peek())) 
                    result += stack.pop(); 
            	
                stack.push(c); 
            } 
       
        } 
       
        while (!stack.isEmpty()){ 
            if(stack.peek() == '(') 
                return "Invalid Expression"; 
            result += stack.pop(); 
         } 
        return result; 
    } 
}