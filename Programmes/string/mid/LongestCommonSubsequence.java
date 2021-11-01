import java.util.Arrays;

public class LongestCommonSubsequence {

	public static void main(String[] args) {
		
		String string1="ABCDGH";
		String string2="AEDFHR";

		char [] arr1=string1.toCharArray();
		char [] arr2=string2.toCharArray();
		char [] arr3 = new char[100];
		int x=0;
		boolean isThere;

		//ABCDGH
		//AEDFHR
	//	print(arr2, arr2.length);
		for (int i=0; i<arr1.length; i++) {
			isThere=false;
			for (int j=0; j<arr2.length; j++) {
				if (arr1[i]==arr2[j]) {
					arr2[j]='\0';
					isThere=true;
				}
			}
			if (isThere) {
				arr3[x]=arr1[i];
				x++;
			}
		}
		print(arr3, arr3.length);
		System.out.println("Length of an array: "+x);
	}

	public static void print(char [] arr, int n) {
		for (int i=0; i<n; i++) {
			System.out.print(arr[i]);
		}
		System.out.println();
	}
}