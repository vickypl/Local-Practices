import java.util.*;
public class SumEqualKUsingHashing {
	
	public static void main(String[] args) {
		
		int[] arr = {3, 5, 9, 2, 8, 10, 11};
		System.out.println(findPairWithSum(arr, 54));

	}

	public static boolean findPairWithSum(int[] arr, int sum) {
		Hashtable<Integer, Integer> ht = new Hashtable<Integer, Integer>();
		for (int i=0; i<arr.length; i++) {
			int k = sum-arr[i];
			if (ht.contains(k)) {
				return true;
			}
			ht.put(i, arr[i]);
		}
		return false;
	}
}