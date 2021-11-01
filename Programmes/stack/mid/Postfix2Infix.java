import java.util.*;

public class Postfix2Infix {

	public static void main(String[] args) {
		//ans =A+B-C
		String str="AB+C-";

		Stack<String> stack = new Stack<>();

		String result="";

		int i=0;
		while(i<str.length()) {
			//String temp=str.charAt(i);
			if (isOprand(str.charAt(i))) {
				stack.push(str.charAt(i)+"");
			} else {
				String p1=stack.peek();
				stack.pop();
				String p2=stack.peek();
				stack.pop();
				stack.push(p2 + str.charAt(i) + p1);
			}
			i++;
		}

		System.out.println(stack.peek());

	}

	static boolean isOprand(char x) {
		return (x>='a' && x<='z') || (x>='A' && x<='Z'); 
	}
	
}