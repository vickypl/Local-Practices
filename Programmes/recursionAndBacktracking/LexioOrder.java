import java.util.Arrays;

public class LexioOrder {

	public static void swap(char a, char b) {
		char temp=a;
		a=b;
		b=temp;
	}

	public static void main(String[] args) {
    //String[] words = { "Ruby", "C", "Python", "Java" };
	String string="hellow";
	char [] words = string.toCharArray();
    for(int i = 0; i < words.length-1; ++i) {
      	for (int j = i + 1; j < words.length; ++j) {
        	if (words[i]>words[j]) {
	    		char temp = words[i];
	          		words[i] = words[j];
    	      		words[j] = temp;
        	}
    	}
    }

    System.out.println("In lexicographical order:");
    	for(int i = 0; i < words.length; i++) {
    		System.out.print(words[i]+" ");
	    }
	}
}