import java.io.*;
import java.util.*;

public class FileWrite {
	

	public static void wrise(String content) throws Exception {

		File file1=null;
		BufferedWriter bw1=null;

	try {

		file1 = new File("Data.txt");
		bw1 = new BufferedWriter(new FileWriter(file1, true));

		bw1.write(content+" ");
		bw1.close();
	
	} catch(IOException e) {
		System.out.println(e);
	} catch(Exception e) {
		System.out.println("Other Exceptions.."+e);
	} finally {
		if (bw1!=null) {
			try {
				bw1.close();
			} catch(Exception ee) {
				System.out.println("Closing Exceptions");
			}
		}
	}

	}



	public static void wride(long content) throws Exception {

		File file=null;
		BufferedWriter bw=null;

	try {

		file = new File("Data.txt");
		bw = new BufferedWriter(new FileWriter(file, true));

		bw.write(content+" ");
		bw.close();
	
	} catch(IOException e) {
		System.out.println(e);
	} catch(Exception e) {
		System.out.println("Other Exceptions.."+e);
	} finally {
		if (bw!=null) {
			try {
				bw.close();
			} catch(Exception ee) {
				System.out.println("Closing Exceptions");
			}
		}
	}

	}
}