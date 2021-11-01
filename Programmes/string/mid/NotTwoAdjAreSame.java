import java.util.*;
public class NotTwoAdjAreSame {

	public static void main(String[] args) {
		
		String string = "sameeksha";

		char [] arr = string.toCharArray();

		for (int i=0; i<arr.length; i++) {
			
			int j=i+1;
			if (arr[i]==arr[j]) {
				while(arr[i]==arr[j]) {
					j++;
				}
				
			}
		}
	}
}