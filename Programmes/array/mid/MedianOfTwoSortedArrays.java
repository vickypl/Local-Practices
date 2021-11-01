public class MedianOfTwoSortedArrays {
	
	public static void main(String[] args) {
		
		int[] arr1 = {1, 12, 15, 26, 38};
		int[] arr2 = {2, 13, 17, 30, 45};
		int n1=arr1.length;
		int n2=arr2.length;

		int[] ans = new int[n1+n2];
		int a=0;
		for (int i=0; i<n1; i++) {
			if (arr1[i]>arr2[i]) {
				ans[a++]=arr2[i];
				ans[a++]=arr1[i];
			} else {
				ans[a++]=arr1[i];
				ans[a++]=arr2[i];
			}
		}

		for (int i=0; i<ans.length; i++) {
			System.out.print(" "+ans[i]);
		}

		System.out.println("\nMedian:: "+ans[ans.length/2]);
	}
}