import java.util.Arrays;

public class EditDitz {

	public static void main(String[] args) {
		
		String string1="geek";
		String string2="gesek";

		char [] arr1=string1.toCharArray();
		char [] arr2=string2.toCharArray();

		int count=0;

		for (int i=0; i<arr1.length; i++) {
			for (int j=0; j<arr2.length; j++) {
				if (arr1[i]!=arr2[j]) {
					count++;
					System.out.println(arr1[j]);
					continue;
				}
			}
		}
		System.out.println("Count: "+count);	
	}
}