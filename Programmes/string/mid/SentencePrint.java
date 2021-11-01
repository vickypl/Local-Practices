import java.util.*;

public class SentencePrint {
	
	public static void main(String[] args) {
		
	String[][] dic = {{"you", "we"}, {"have", "are"}, {"sleep", "eat", "drink"}};
	print(dic);
	
	System.out.println("+++++++++++++++dictionary Print..+++++++++++++++");

	dictionary(dic);
	}

	public static void dictionary(String[][] dic) {
		String toPrint=" ";
		for (int i=0; i<3; i++) {;
			for (int j=0; j<dic[i].length; j++) {
				toPrint=toPrint+" "+dic[i][j];
			}
			System.out.println(toPrint);
		}
	}

	public static void print(String[][] dic) {
		for (int i=0; i<3; i++) {
			for (int j=0; j<dic[i].length; j++) {
				System.out.println(dic[i][j]);
			}
			System.out.println();
		}
	}
}