public class isNumberPalindrome {
	
	public static void main(String[] args) {
		
		int x = 121;

		int temp=x;
		int t=0;
		while(temp>0) {
			t=t*10+temp%10;
			temp=temp/10;
		}
		if(t==x)
			System.out.println("Number is Palindrome");
		else
			System.out.println("Number is not Palindrome");
	}
}