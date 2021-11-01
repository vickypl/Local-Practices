import java.util.*;

public class Prefix2Infix {
	
	public static void main(String[] args) {
		
		
		//String str = "*+AB-CD";
		String str = "*-A/BC-/AKL";
 
		Stack<String> stack = new Stack<>();

		int i=str.length()-1;
		
		while(i>=0) {
			//String x=.toString();
			if(isOprand(str.charAt(i))) {
				stack.push(str.charAt(i)+"");
			}
			if(isOprator(str.charAt(i))) {
				String s0="(";
				String s1=stack.pop();
				String s2=str.charAt(i)+"";
				String s3=stack.pop();
				String s4=")";
				String res=s0+s1+s2+s3+s4;
				stack.push(res);
			}
			i--;
		} 
		
		System.out.println(stack.peek());	
	}

	static boolean isOprator(char ch) {
		if((ch=='+') || (ch=='*') || (ch=='/') || (ch=='-')) {
			return true;
		}
		return false;
	}

	static boolean isOprand(char ch) {
		if(('a'<=ch && 'z'>=ch) || ('A'<=ch && 'Z'>=ch)) {
			return true;
		}
		return false;
	}
}