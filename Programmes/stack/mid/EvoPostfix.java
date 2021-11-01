import java.util.*;
public class EvoPostfix {
	
	public static void main(String[] args) {
		
		String str="234*+def^/-";
		
		Stack<Double> stack = new Stack<Double>();
		
		for(int i=0; i<str.length(); i++) {
			if(isOprand(str.charAt(i))) {
				stack.push((double)(str.charAt(i) - 48));
			} else {
				double one=stack.pop();
				double two=stack.pop();
				switch(str.charAt(i)) {
					case '+':
								stack.push(one+two);
								break;
					case '/':
								stack.push(one/two);
								break;
					case '-':
								stack.push(one-two);
								break;
					case '*':
								stack.push(one*two);
								break;
				}
			}
		}
		System.out.println(stack.peek());
	}


	public static boolean isOprand(char ch) {
		if (ch >= 48 && ch <= 57)
            return true;
        else
            return false;
	}
}