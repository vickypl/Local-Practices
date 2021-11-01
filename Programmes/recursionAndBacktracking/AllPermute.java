public class AllPermute {
	
	public static void main(String[] args) {
		//String str = "abcdyhujn";
		String str = "aq";
		char[] arr = str.toCharArray();
		doAnagram(arr, str.length());
	}

	static void rotate(char str[],int n) {
	   int j,size=str.length;
	   int p=size-n;
	   char temp=str[p];
	    for(j=p+1;j<size;j++) {
	       str[j-1]=str[j];
	    }
	    str[j-1]=temp;
	}

	static void doAnagram(char str[], int n) {
	    if(n==1)
	        return;
	    for(int j=0;j<n;j++)
	    {
	       doAnagram(str,n-1);
	       if(n==2)
		   {
	    		display(str);
	       }
	        	rotate(str,n);
	    }
	}

	static void display(char str[]) {  
		int size=str.length,j;
	    for(j=0; j<size; j++)
	    	System.out.print(str[j]);
	    System.out.println();
	}
}