import java.util.*;


public class RemoveBrackets {
	

	public static void main(String[] args) {
		
		//String strng="a-(b-c-(d+e))-f";
		String strng="a-(b+c)";

		char[] arr = strng.toCharArray();
//		char[] arr = strng.toCharArray();
		Stack<Character> stack = new Stack<Character>();


		for (int i=arr.length-1; i>=0; i--) {
			if (arr[i]!='(' && arr[i]!=')') {
				stack.push(arr[i]);
			}
		}

		String str="";
		int n=stack.size();
		for (int j=0; j<n; j++) {
			str=str+stack.pop();
		}

		System.out.println("input::"+strng);
		System.out.println("output::"+str);



//		System.out.println(stack);

	}
}