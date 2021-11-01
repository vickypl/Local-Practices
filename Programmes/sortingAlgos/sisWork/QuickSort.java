import java.util.*;

public class QuickSort {

	public static void main(String[] args) throws Exception {
	
		FileWrite.wrise("InsertionSort");

		String[] string1={"vicky", "Sham", "Mukesh", "Ambani", "Teja", "Champak", "Govind", "Devid", "Shubham", "Akhanda"};		
		totalTime(string1);

		String[] string2 = new String[50];
		fillString(string2);
		totalTime(string2);

		String[] string3 = new String[1000];
		fillString(string3);
		totalTime(string3);

		String[] string4 = new String[2000];
		fillString(string4);
		totalTime(string4);


		String[] string5 = new String[10000];
		fillString(string5);
		totalTime(string5);
	
		FileWrite.wrise("\n");			
	}

	public static void fillString(String[] str) {
		int s=0;
		for (int i=0; i<str.length; i++) {
			String genratedString = genrateString(5);
			str[s]=genratedString;
			s++;
		}		
	}

	public static void totalTime(String[] str) {
		//print(string1);
		long startTime =  System.nanoTime(); 
		quickSort(str, 0, str.length-1);
		long endTime =  System.nanoTime();
		System.out.println("Total time Taken for String Length "+str.length+" = "+(endTime-startTime)+"\n");
		//print(string1);
		try {
			FileWrite.wride(endTime-startTime);
		} catch(Exception ee) {
			System.out.println(ee);
		}
	}

	public static String genrateString(int n) {
		Random rand = new Random();
		String apha="abcdefghijklmnopqurstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		StringBuilder sb = new StringBuilder();

		for (int i=0; i<n; i++) {
			int index=rand.nextInt(apha.length())+0;
			sb.append(apha.charAt(index));
		}

		return sb.toString();
	}


	public static void print(String arr[]) {
		for (int j=0; j<arr.length; j++) {
			System.out.print(" "+arr[j]);
		}
		System.out.println();
	}
	
    public static void quickSort(String array[], int start, int end) {
        int i = start;
        int k = end;
        if (end - start >= 1) {
            String pivot = array[start];
            while (k > i) {
                while (array[i].compareTo(pivot) <= 0 && i <= end && k > i)
                    i++;
                while (array[k].compareTo(pivot) > 0 && k >= start && k >= i)
                    k--;
                if (k > i)
                    swap(array, i, k);
            }
            swap(array, start, k);
            quickSort(array, start, k - 1);
            quickSort(array, k + 1, end);
        } else { 
        	return; 
        }
    }

    public static void swap(String array[], int index1, int index2) {
        String temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;
    }
}