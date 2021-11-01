import java.util.Stack;

public class DuplicateParanthesis {
	

	public static void main(String[] args) {
		
		String str = "((a+b)+(a+b))";

		Stack<Character> stack = new Stack<Character>();

		boolean flag=true;
		end:
		for (int i=0; i<str.length(); i++) {
			if (str.charAt(i)=='(') {
				stack.push(str.charAt(i));
			} else {
				if (!stack.isEmpty()) {

					if (stack.peek()=='(') {
						flag=false;
						break end;
					} else {					
						while(stack.peek()!='(') {
							stack.pop();
						}
						stack.pop();
					}
				}
			}
		}
			System.out.println(flag);
	}
}