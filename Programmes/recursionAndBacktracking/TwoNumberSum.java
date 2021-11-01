public class TwoNumberSum {
	
	public static void main(String[] args) {
		
		int a=10;
		int b=43;

		System.out.println(sum(a, b));
	}

	public static int sum(int a, int b) {
		if (b==0) {
			return a;
		}
		return sum(a, b-1)+1;
	}
}