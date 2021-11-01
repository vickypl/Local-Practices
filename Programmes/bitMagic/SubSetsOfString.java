import java.util.*;
public class SubSetsOfString {
	
	public static void main(String[] args) {
		
		String str = "abc";
		String ans = "";
		ArrayList<String> list = new ArrayList<String>();
		printSubset(list, str, ans, 0);
		System.out.println(list);
	}

	public static ArrayList<String> printSubset(ArrayList<ArrayList<String>> listint , ArrayList<String> list, String str, String ans, int index) {
		if (index==str.length()) {
			list.add(ans);
			return list;
		}
		printSubset(list, str, ans, index+1);
		return printSubset(list, str, ans+str.charAt(index), index+1);
	}
}