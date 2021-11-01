public class FirstAppreanceIndexUsingBinarySearch {
	
	public static void main(String[] args) {
			int[] arr = {11, 22, 33, 33, 33, 33, 33, 944, 9454, 43455};
			System.out.println(getFirstAppearingIndex(arr, 0, arr.length-1, 33));

	}


	public static int getFirstAppearingIndex(int[] arr, int start, int end, int k) {
		if (start>end)
			return -1;

		int mid = (start+end)/2;

		if (arr[mid]==k && (mid==0 || arr[mid-1]!=k))
			return mid;

		if (arr[mid]>=k)
			return getFirstAppearingIndex(arr, start, mid-1, k);
		else 
			return getFirstAppearingIndex(arr, mid+1, end, k);
	}
}