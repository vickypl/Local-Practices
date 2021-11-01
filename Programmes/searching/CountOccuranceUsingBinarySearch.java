public class CountOccuranceUsingBinarySearch {
	
	public static void main(String[] args) {
		
		int[] arr = {11, 22, 67, 67, 67, 67, 97, 944, 9454, 43455};
		System.out.print(totalAppearence(arr, 67));
	}


	public static int totalAppearence(int[] arr, int k) {
		int i=countRightMostIndex(arr, 0, arr.length-1, k, arr.length-1);
		int j=countLeftMostIndex(arr, 0, arr.length-1, k);
		return i-j+1;
	}


	public static int countRightMostIndex(int[] arr, int start, int end, int k, int n) {
		if (start>end) {
			return 0;
		}
		int mid = end-(end-start)/2;

		if (arr[mid]==k && ((mid!=(n-1)) || arr[mid+1]!=k)) {
			return mid;
		}
		if (arr[mid]>k) {
			return countRightMostIndex(arr, start, mid-1, k, n);
		} else {
			return countRightMostIndex(arr, mid+1, end, k, n);
		}
	}

	public static int countLeftMostIndex(int[] arr, int start, int end, int k) {
		if (start>end) {
			return 0;
		}
		int mid = (start+end)/2;

		if (arr[mid]==k && (mid==0 || arr[mid-1]!=k)) {
			return mid;
		}

		if (arr[mid]>=k) {
			return countLeftMostIndex(arr, start, mid-1, k);
		} else {
			return countLeftMostIndex(arr, mid+1, end, k);
		}
	}
}