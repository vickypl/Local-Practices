public class BrainKarningAlgo {

	public static void main(String[] args) {
		
		//algorithem to count set bits in a number
		int n=26;
		int count=0;
		while(n>0) {
			n=(n&(n-1));
			count++;
		}
		
		System.out.println("Total Number of Set Bits: "+count);

	}
	
}