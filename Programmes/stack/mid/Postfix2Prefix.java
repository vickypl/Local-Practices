import java.util.*;

public class Postfix2Prefix {
	
	public static void main(String[] args) {
		
		String str="AB+CD-*";

        Stack<String> s = new Stack<String>();
        int length = str.length();
        for (int i = 0; i < length; i++) {
            if (isOperator(str.charAt(i))) {
                String op1 = s.pop();
                String op2 = s.pop();
                String temp= str.charAt(i) + op2 + op1;
                s.push(temp);
            }
            else {
                s.push(str.charAt(i) + "");
            }
        }
 
        String ans = "";
        for (String i : s)
            ans += i;

		System.out.println("Ans::"+str);
		System.out.println("Ans::"+ans);
	}

   static boolean isOperator(char x)
    {
 
        switch (x) {
        case '+':
        case '-':
        case '/':
        case '*':
            return true;
        }
        return false;
    }
}