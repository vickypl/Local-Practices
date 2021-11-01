public class power {
	
	public static void main(String[] args) {
		
		int a=5;
		int b=4;	//b power a

		System.out.println(pow(a, b));

	}

	public static int pow(int a, int b) {
		if (b==0) return 1;
		return a*pow(a, b-1);
	}
}