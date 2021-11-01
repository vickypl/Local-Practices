public class IsPowerOfTwo {
	
	public static void main(String[] args) {
		
		int eg1 = 16;
		int eg2 = 9;

		if(eg1>0 && (eg1 & (eg1-1))==0)
			System.out.println("is power of two");
		else
			System.out.println("is not power of two");


		if(eg2>0 && (eg2 & (eg2-1))==0)
			System.out.println("is power of two");
		else
			System.out.println("is not power of two");
	}
}