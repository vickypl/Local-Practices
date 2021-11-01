import java.util.*;

public class Infix2Postfix {

	public static void main(String[] args) {
		
		String str = "A+B-C*D%F%J*K";
		System.out.println(str);

		Stack<Character> stack = new Stack<>();

		String result="";
		for (int i=0; i<str.length(); i++) {
			char temp=str.charAt(i);
			if (Character.isLetterOrDigit(temp)) {
				result=result+temp;
			} else if (temp=='(') {
				stack.push(temp);
			} else if (temp==')') {
				while(!stack.isEmpty() && stack.peek() != '(') {
					result+=stack.pop();
				}
				stack.pop();
			} else {
				while(!stack.isEmpty() && prece(temp) <= prece(stack.peek()))
					result+=stack.pop();
				stack.push(temp);
			}
		}
		while(!stack.isEmpty()) {
			if (stack.peek()=='(') {
				System.out.println("invalid Expression");
			}
			result = result+stack.pop();
		}
		System.out.println(result);
	}
	
	static int prece(char ch) {
		switch (ch) {
			case'+':
			case'-':
					return 1;
			case'/':
			case'*':
					return 2;
			case'^':
					return 3;
		}
		return -1;
	}
}