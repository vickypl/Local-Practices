import java.util.Arrays;

public class RemoveCharFromString {

	public static void main(String[] args) throws Exception{
		
		String string = "this is vicky";
		System.out.println(string);

		char ch='c';

		System.out.println("Letter "+ch+" removed.");

		char [] strings = string.toCharArray();

		int k=0;


		System.out.println(strings.length);

		for (int i=0; i<strings.length; i++) {
			if (ch==strings[i]) {
				for (int j = i; j<strings.length-1; ++j) {
					strings[j] = strings[j + 1];
						System.out.println(strings[j+1]);				         	
         		}
         		break;
			}
		}

		for (int i=0; i<strings.length-1; i++) {
			System.out.print(strings[i]);
		}

	}
}