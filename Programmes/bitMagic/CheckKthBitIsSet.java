public class CheckKthBitIsSet {
	
	public static void main(String[] args) {
		
		int x=63;
		int k=19;
		if((x & (1<<(k-1)))>0) {
			System.out.println(k+"th bit is set");
		} else {
			System.out.println(k+"th bit is Not set");
		}
	}
}