import java.util.*;

public class InsertionSort {

	public static void main(String[] args) throws Exception{

		FileWrite.wrise("InsertionSort");
		
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

	public static void inserstionSorting(String[] str) {
		for (int i=1; i<str.length; i++) {
			String ss=str[i];
			int k=i-1;
			while(k>=0 && str[k].compareToIgnoreCase(ss)>0) {
				str[k+1]=str[k];
				k--;
			}
			str[k+1]=ss;
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
		inserstionSorting(str);
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

}