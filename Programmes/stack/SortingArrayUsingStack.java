import java.util.Stack;

public class SortingArrayUsingStack {
	
	public static void main(String[] args) {
		
		String str =  "this what we needa do in the evening";
		
		Stack<Character> stack = new Stack<Character>();
		
		for(int i=0; i<str.length(); i++) {
			char ch = str.charAt(i);
			stack.push(ch);
			System.out.print(ch);
		}
		
		
		for(int i=0; i<str.length(); i++) {
			char ch = stack.pop();
			System.out.print(ch);
		}
		
		
	}
}