import java.util.Stack;

public class TowerOfHanoi {
	
	public static void main(String[] args) {
		
		Stack<Integer> towerOfHanoi = new Stack<Integer>();
		Stack<Integer> helper = new Stack<Integer>();
		Stack<Integer> result = new Stack<Integer>();
		
		towerOfHanoi.push(7);
		towerOfHanoi.push(6);
		towerOfHanoi.push(5);
		towerOfHanoi.push(4);
		towerOfHanoi.push(3);
		towerOfHanoi.push(2);
		towerOfHanoi.push(1);

		System.out.println(towerOfHanoi);
		
	}
}