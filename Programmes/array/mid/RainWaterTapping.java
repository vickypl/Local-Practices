public class RainWaterTapping {
	
	public static void main(String[] args) {
		
		int[] pillers = {3, 0, 1, 2, 5};

		int vol=0;

		for (int i=1; i<pillers.length-1; i++) {
			int maxLeft=pillers[i];
			int maxRight=pillers[i];
			
			for (int j=0; j<i; j++) {
				if (pillers[j]>maxLeft) {
					maxLeft=pillers[j];
				}
			}

			for (int j=i+1; j<pillers.length; j++) {
				if (pillers[j]>maxRight) {
					maxRight=pillers[j];
				}
			}

			vol=vol+Math.min(maxLeft, maxRight)-pillers[i];
		}

		System.out.println("Max Volume: "+vol);
	}
}