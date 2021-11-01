import java.io.*; 
import java.util.*;

public class SortString {

	public static void main(String[] args) {
		
		String string="hellow";
		int length=string.length();

//		System.out.println(string);
		char [] arr = string.toCharArray();
		System.out.println(arr);
		for (int i=0; i<length-1; i++) {
			for (int j=1; j<length; j++) {
				char a=arr[i];
				char b=arr[j];
				if (a>b) {
					char tem=arr[i];
					arr[i]=arr[j];
					arr[j]=tem;
				}
//				System.out.println("a:"+a+",b:"+b);
			}
		}
		System.out.print(arr);
		System.out.println();
	}
}