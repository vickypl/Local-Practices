public class SubsTwoNum {
	
	public static void main(String[] args) {
		
		int a=38;
		int b=21;
		System.out.println(subs(a, b));
	
	}

	public static int subs(int a, int b) {
		if (b==0) {
			return a;
		}
		return subs(a, b-1)-1;
	}
}