public class AllSubStrUsingSimpleRec {
	
	public static void main(String[] args) {
		
		String str="abc";
		String cur="";
		printSubstring(str, cur, 0);

	}

	public static void printSubstring(String str, String cur, int index) {
		if (index==str.length()) {
			System.out.println(cur);
			return;
		}
		printSubstring(str, cur, index+1);
		printSubstring(str, cur+str.charAt(index), index+1);
	}
}