public class gcd {
	
	public static void main(String[] args) {
		
		int a=500;
		int b=35;

		System.out.println(gcd(a, b));
	}

	public static int gcd(int a, int b) {
		if (b==0) {
			return a;
		}
		return gcd(b, a%b);
	}
}