import java.util.*;

public class FabonecciRec {

	static HashMap<Integer, Integer> hash = new HashMap<Integer, Integer>();
	public static int fab(int n) {
		//System.out.println(n);
		if (n==0) {
			return 0;
		} 
		if (n==1) {
			return 1;
		}
		int val=fab(n-1)+fab(n-2);
		hash.put(n, val);
		return val;
	}

	public static int fab2(int n) {
		//System.out.println(n);
		if (n==0) {
			return 0;
		} 
		if (n==1) {
			return 1;
		}
		return fab2(n-1)+fab2(n-2);
	}

	public static void main(String[] args) {
		
		System.out.println("Facbonneci series..");
		long start = System.currentTimeMillis();
		for (int i=0; i<20; i++) {			
			System.out.print(" "+fab(i));
		}
		long end = System.currentTimeMillis();
		long elapsedTime = end - start;
		System.out.println();
		System.out.println("TIME TAKEN: "+elapsedTime);
		System.out.println();
		long stt = System.currentTimeMillis();
		for (int i=0; i<20; i++) {			
			System.out.print(" "+fab2(i));
		}
		long ed = System.currentTimeMillis();
		long eTime = ed - stt;
		System.out.println();
		System.out.println("TIME TAKEN 2: "+eTime);
	}
}