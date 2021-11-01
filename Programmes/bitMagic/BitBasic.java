public class BitBasic {
	
	public static void main(String[] args) {
		
		int x=5;
		int y=4;
		System.out.println("Numbers: x="+x+" and y="+y);
		System.out.println("Bit Wise And(x&y):-> "+ (x&y));
		System.out.println("Bit Wise Or(x|y):-> "+ (x|y));
		System.out.println("after togling the number(~y):-> "+~y);
		System.out.println("after right shift the number by k(5>>2):-> "+(5>>2)); //that is 5 is right shifted by 2
		System.out.println("after left shift the number by k(5<<2):-> "+(5<<2));
		System.out.println("after left shift the number by k(5>>>2):-> "+(5>>>2)); // java special
		//in java we have >>> also which converts after taking 2's complement then shift.. as java doesnt support 
		//unassigned integers
	}
}