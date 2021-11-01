import java.util.*;

public class AllParmutaions{

	static int count=0;

	public static void main(String[] args) {
		
		String str= "abc";
		permutations(str, "");
		System.out.println("+++++++++++++++++++++");
		permutations2(str, "");

	}
	
	public static void permutations(String str, String asf) {
		
		if (str.length()==0) {
			System.out.println(asf);
			return;
		}

		for (int i=0; i<str.length(); i++) {
			char ch=str.charAt(i);
			String left = str.substring(0, i); //cuts substring of 0 to i-1;
			//System.out.println("left:"+left);
			String right = str.substring(i+1); //cuts substing of i to n;
			//System.out.println("right:"+right);
			String temp = left+right;
			//System.out.println("temp:"+temp);
			//System.out.println("asf: "+asf);
			permutations(temp, asf+ch);
		}
	}

	//second way of writing this
	public static void permutations2(String str, String asf) {
		
		if (str.length()==0) {
			System.out.println(asf);
			return;
		}

		for (int i=0; i<str.length(); i++) 
			permutations(str.substring(0, i)+str.substring(i+1), asf+str.charAt(i));
	}

}