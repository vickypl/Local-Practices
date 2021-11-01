//https://www.pepcoding.com/most-important-interview-questions-list-for-product-based-companies
public class Histogram {
	
	public static void main(String[] args) {
		
		int arr[] = {6, 2, 5, 4, 5, 1, 6};
		
		int min = Integer.MAX_VALUE;
		System.out.println(min);
	}
}



/* Solution (Divide and Conquor)

    public int largestRectangleArea(int[] heights) {
        return helper(heights, 0, heights.length - 1);
    }
    
    private int helper(int[] heights, int left, int right) {
        if (left > right) return 0;
        if (left == right) return heights[left];
        int minIndex = 0, min = Integer.MAX_VALUE;
        for (int i = left; i <= right; i++) {
            if (heights[i] < min) {
                min = heights[i];
                minIndex = i;
            } 
        }
        
        int maximumWidthArea = (right - left + 1) * min;
        int leftAreaMax = helper(heights, left, minIndex - 1);
        int rightAreaMax = helper(heights, minIndex + 1, right);
        
        return Math.max(maximumWidthArea, Math.max(leftAreaMax, rightAreaMax));
    }

Solution (Stack)

    public int largestRectangleArea(int[] heights) {
        int maxArea = 0;
        Stack<Integer> stack = new Stack<>();
        stack.push(-1);
        for (int i = 0; i < heights.length; i++) {
            while (stack.peek() != -1 && heights[i] <= heights[stack.peek()]) {
                maxArea = Math.max(maxArea, heights[stack.pop()] * (i - stack.peek() - 1));
            }
            stack.push(i);
        }
        
        while (stack.peek() != -1)
            maxArea = Math.max(maxArea, heights[stack.pop()] * (heights.length - stack.peek() -1));
        return maxArea;
    }
 */
