import java.util.*;

public class QueStack {
	
	public static void main(String[] args) {

		Que q = new Que();
		q.enque(10);
		q.enque(20);
		q.enque(30);
		q.enque(40);

		System.out.println(q.deque());
		System.out.println(q.deque());
		System.out.println(q.deque());
		System.out.println(q.deque());
		System.out.println(q.deque());

	}
}

class Que {

	Stack<Integer> stack1 = new Stack<Integer>();
	Stack<Integer> stack2 = new Stack<Integer>();

	public void enque(int item) {
		while(!stack1.isEmpty())
			stack2.push(stack1.pop());
		stack1.push(item);
		while(!stack2.isEmpty())
			stack1.push(stack2.pop());
	}

	public int deque() {
		int data=-1;
		if (stack1.isEmpty())
			System.out.println("Error");
		else 
			data=stack1.pop();
		return data;
	}
}