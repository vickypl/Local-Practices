public class SlidingWindow {
	
	public static void main(String[] args) {
		
		int[] arr = {7, 6, 4, 3, 2, 3, 6, 4, 3, 2, 4};


		int k=3; //this is the size of the window

		int sum = 17;
		System.out.println(sum);
		for (int i=k; i<arr.length; i++) {
			sum = sum-arr[i-k];
			sum = sum+arr[i];
			System.out.println(sum);
		}
	}
}