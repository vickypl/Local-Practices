import java.util.Stack;

public class MiddleElementOfTheStack {
	
	public static void main(String[] args) {
		
		Stack<Integer> stack = new Stack<Integer>();

		stack.push(10);
		stack.push(20);
		stack.push(30);
		stack.push(40);
		stack.push(50);
		
		System.out.println("Before Deletion+++++++++++++++++++++");
		System.out.println(stack);
		
		//logic
		stack.remove(stack.get(stack.size()/2));
		System.out.println("After Deletion+++++++++++++++++++++");
		System.out.println(stack);
	}
}