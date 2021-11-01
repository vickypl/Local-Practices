import java.util.*;

public class MergeSorting {

	public static void main(String[] args) throws Exception{
		
		FileWrite.wrise("MergeSorting");

		String[] str1 = new String[10];
		fillString(str1);
		totalTime(str1);

		String[] str2 = new String[50];
		fillString(str2);
		totalTime(str2);

		String[] str3 = new String[1000];
		fillString(str3);
		totalTime(str3);

		String[] str4 = new String[2000];
		fillString(str4);
		totalTime(str4);

		String[] str5 = new String[10000];
		fillString(str5);
		totalTime(str5);

		FileWrite.wrise("\n");

	}

	public static void merge(String[] str, int low, int mid, int high) {
		
		String[] b = new String[100000];

		int l1, l2, i;
		
		for (i=low, l1=low, l2=mid+1; l1<mid && l2<high; i++) {
			if (l1<mid) {
				b[i]=str[l1++];
			} else {
				b[i]=str[l2++];
			}
		}
		while(l1<mid)
			b[i++]=str[l1++];
		
		while(l2<high)
			b[i++]=str[l2++];

		for (int k=low; k<high; k++) {
			str[k]=b[k];			
		}		
	}

	public static void mergeSort(String[] str, int low, int high) {
		if (low<high) {
			int mid=(low+high)/2;
			mergeSort(str, low, mid);
			mergeSort(str, mid+1, high);
			merge(str, low, mid, high);
		}
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
		mergeSort(str, 0, str.length-1);
		long endTime =  System.nanoTime();
		System.out.println("Total time Taken for String Length "+str.length+" = "+(endTime-startTime)+"\n");
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
}