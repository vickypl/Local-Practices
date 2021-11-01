import java.util.*;

public class BinarySearch {
	

	public static void main(String[] args) {
		
		int[] arr = {32, 4, 56, 58, 23, 45, 67, 89, 73, 87, 65, 43, 34};
		int[] sorted = new int[arr.length];
		Arrays.sort(arr);

		for (int i=0; i<arr.length; i++) {
			sorted[i]=arr[i];
		}

		for (int i=0; i<arr.length; i++) {
			System.out.print(" "+arr[i]);
		}

		// System.out.println("++++++++++");
		// System.out.println(binarySerach(sorted, 0, 12, 435));

		System.out.println("=============");

		System.out.println(Arrays.binarySearch(sorted, 34));

	}

	public static int binarySerach(int[] arr, int left, int right, int key) {
		if (right>1) {
			int mid = (left+right)/2;

			if (arr[mid]==key) {
				return arr[mid];
			}
			if (key<arr[mid]) {
				return binarySerach(arr, left, mid-1, key);
			}
			return binarySerach(arr, mid+1, right, key);
		}
		return -1;
	}
}