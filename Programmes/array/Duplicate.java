import java.util.Arrays;

public class Duplicate {
	 
	 public static void main(String[] args) {
		
		int [] arr= {1, 3, 4, 3, 8, 6, 4, 23};
		int count=-1;
		for (int i=0; i<arr.length; i++) {

			 for (int j=i+1; j<arr.length; j++) {			 		
			
			 		if (arr[i]==arr[j]) {
			 			//int k=j;
			 			arr[j]=0;
			 			//while(k<arr.length-1) {
			 			//	arr[k]=arr[k+1];			
			 			//	k++;			
			 			//}				
			 		}
			 		if (arr[i]==arr[j]) {
			 			count++;
			 		}

			}

		}	 	

		System.out.println("count:"+count);
		//count=2;
		for (int k=0; k<arr.length-count; k++) {
			System.out.println(arr[k]);
		}

	 }

}