import java.util.*;

public class StackSortRec {
	
	public static void main(String[] args) {
		
		Stack<Integer> stack = new Stack<Integer>();
		stack.push(65);
		stack.push(34);
		stack.push(23);
		stack.push(87);
		stack.push(12);
		
		sortStack(stack);
		
		while(!stack.isEmpty())
			System.out.println(stack.pop());
	}
	public static void sortStack(Stack<Integer> s) {
			if (!s.isEmpty()) 
			{
				int x = s.pop();
				sortStack(s);
				sortedInsert(s, x);
			}
	}
	
	public static void sortedInsert(Stack<Integer> s, int x) {
		    if (s.isEmpty() || x > s.peek()) 
			{
				s.push(x);
				return;
			}
			int temp = s.pop();
			sortedInsert(s, x);
			s.push(temp);
	}
}