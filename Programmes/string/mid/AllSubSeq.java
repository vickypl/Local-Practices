import java.util.*;
public class AllSubSeq {

	static List<String> al = new ArrayList<>();


	public static void main(String[] args) {
	
		String string="abc";


		String ans;
		findsubsequences(string, " ");
		System.out.println(al);

	}

	private static void findsubsequences(String s, String ans)
    {
        if (s.length() == 0) {
            al.add(ans);
            return;
        }
		System.out.println(s.substring(1));
        findsubsequences(s.substring(1), ans+s.charAt(0));
       	findsubsequences(s.substring(1), ans);
    }
}