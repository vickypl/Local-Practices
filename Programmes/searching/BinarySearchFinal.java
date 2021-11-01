public class BinarySearchFinal {
	
	public static void main(String[] args) {
		
		int[] arr = {11, 22, 33, 45, 67, 87, 97, 944, 9454, 43455};
		System.out.println(binarySearch(arr, 0, arr.length-1, 67));

	}

	public static int binarySearch(int[] arr, int start, int end, int k) {
		if (start>end)
			return -1;

		//int mid = (start+end)/2; //normal way can course overflow
		int mid = start+(end-start)/2; //standart way to avoid over flow for large data sets

		if (arr[mid]==k)
			return mid;

		if (arr[mid]>k)
			return binarySearch(arr, start, mid-1, k);
		else 
			return binarySearch(arr, mid+1, end, k);
	}
}