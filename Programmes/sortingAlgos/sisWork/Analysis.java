import java.util.*;
import java.io.*;

public class Analysis {

	public static void main(String[] args) throws Exception{


		File file = new File("Data.txt");
		Scanner scanner = new Scanner(file);
		List<Long> list = new ArrayList<Long>();
		while (scanner.hasNext()) {
		    if (scanner.hasNextLong()) {
		        list.add(scanner.nextLong());
		    } else {
		        scanner.next();
		    }
		}
		
		//list in which all long values from file collected
		//System.out.println("Length of inti:"+list.size());
		//System.out.println(list);
	
		long[] arr10 = new long[6];
		int a10=0;
		long[] arr50 = new long[6];
		int a50=0;
		long[] arr1000 = new long[6];
		int a1000=0;
		long[] arr2000 = new long[6];
		int a2000=0;
		long[] arr10000 = new long[6];
		int a10000=0;


		for (int i=0; i<6; i++) {
			for (int k=i; k<=i+25; k=k+5) {
				//System.out.print("  "+k);
				if (i==0 && a10<arr10.length) {
					arr10[a10]=list.get(k);
					a10++;
				} else if (i==1 && a50<arr50.length) {
					arr50[a50]=list.get(k);
					a50++;
				} else if (i==2 && a1000<arr1000.length) {
					arr1000[a1000]=list.get(k);
					a1000++;
				} else if (i==3 && a2000<arr2000.length) {
					arr2000[a2000]=list.get(k);
					a2000++;
				} else if (i==4 && a10000<arr10000.length) {
					arr10000[a10000]=list.get(k);
					a10000++;
				}
			}
		}

		//print of all arrays where data it terms of quantity stored..
/*		for (int i=0; i<arr10.length; i++) {
			System.out.print(" "+arr10[i]);
			System.out.print(" "+arr50[i]);
			System.out.print(" "+arr1000[i]);
			System.out.print(" "+arr2000[i]);
			System.out.print(" "+arr10000[i]);
			System.out.println();
		}
*/
				System.out.println("When array of Size 10 is used: ");
				System.out.print("Minimum Speed of: ");
				algorithm(greatest(arr10));
				System.out.print("Maximum Speed of: ");
				algorithm(smallest(arr10));

				System.out.println();

				System.out.println("When array of Size 50 is used: ");
				System.out.print("Minimum Speed of: ");
				algorithm(greatest(arr50));
				System.out.print("Maximum Speed of: ");
				algorithm(smallest(arr50));

				System.out.println();

				System.out.println("When array of Size 1000 is used: ");
				System.out.print("Minimum Speed of: ");
				algorithm(greatest(arr1000));
				System.out.print("Maximum Speed of: ");
				algorithm(smallest(arr1000));

				System.out.println();
				
				System.out.println("When array of Size 2000 is used: ");
				System.out.print("Minimum Speed of: ");
				algorithm(greatest(arr2000));
				System.out.print("Maximum Speed of: ");
				algorithm(smallest(arr2000));

				System.out.println();
				
				System.out.println("When array of Size 10000 is used: ");
				System.out.print("Minimum Speed of: ");
				algorithm(greatest(arr10000));
				System.out.print("Maximum Speed of: ");
				algorithm(smallest(arr10000));
	}

	public static void algorithm(int i) {
		if (i==0) {
			System.out.println("InsertionSort..");
		} else if (i==1) {
			System.out.println("Merge Sort..");
		} else if (i==2) {
			System.out.println("Selection Sort..");
		} else if (i==3) {
			System.out.println("Quick Sort..");
		} else if (i==4) {
			System.out.println("Bubble Sort..");
		} else if (i==5) {
			System.out.println("Recursive Bubble Sort..");
		}
	}

	public static int greatest(long[] arr) {
		int lendex=-1;
		long great=arr[0];
		for (int i=1; i<arr.length; i++) {
			if (great<arr[i]) {
				great=arr[i];
				lendex=i;
			}
		}
		return lendex;
	}

	public static int smallest(long[] arr) {
		int index=-1;
		long small=arr[0];
		for (int i=0; i<arr.length; i++) {
			if (small>arr[i]) {
				small=arr[i];
				index=i;
			}
		}
		return index;
	}

	public static void print(long arr[]) {
		for (int j=0; j<arr.length; j++) {
			System.out.print(" "+arr[j]);
		}
		System.out.println();
	}
}