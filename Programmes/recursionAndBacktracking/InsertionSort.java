public class InsertionSort {

	public static void main(String[] args) {
		

		int [] arr={13, 43, 87, 65, 57, 78, 98, 67, 45, 64, 23, 53, 54, 43};

		System.out.println("Length of this array: "+arr.length);

		for(int i=1; i<arr.length; i++) {
			
			int ele=arr[i];
			int j=i-1;
				
				while(j>=0 && arr[j]>ele) {
					arr[j+1]=arr[j];
					j=j-1;
				}
				arr[j+1]=ele;
		}

		for(int i=0; i<arr.length; i++) {
		
			System.out.print(" "+arr[i]);
			
		}
		System.out.println();
	}
}