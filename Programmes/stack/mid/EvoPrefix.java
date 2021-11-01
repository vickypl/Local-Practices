import java.util.*;

public class EvoPrefix {
	
	public static void main(String[] args) {
		
		String str = "-+2*34/16^23";
		
		Stack<Double> stack = new Stack<Double>();
		
		for(int i=str.length()-1; i>=0; i--) {
			
			if(isOprand(str.charAt(i))) {
				stack.push((double)(str.charAt(i) - 48));
			} else {
				Double o1=stack.pop();
				Double o2=stack.pop();
				switch (str.charAt(i)) {
					case '+':
						stack.push(o1 + o2);
						break;
					case '-':
						stack.push(o1 - o2);
						break;
					case '*':
						stack.push(o1 * o2);
						break;
					case '/':
						stack.push(o1 / o2);
						break;
				}
			}
		}
		Double x=stack.pop();
		if(stack.isEmpty()) {
			System.out.println("Value is "+x);
		} else {
			System.out.println("Invalid expresssionnn");
		}
	}
	
	public static boolean isOprand(char ch) {
		if (ch >= 48 && ch <= 57)
            return true;
        else
            return false;
	}
}