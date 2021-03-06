public class NextPermutation {
    public static void nextPermutation(int[] nums) {    
        int i = nums.length - 2;    
        while (i >= 0 && nums[i + 1] <= nums[i]) {    
            i--;    
        }    
        if (i >= 0) {    
            int j = nums.length - 1;    
            while (j >= 0 && nums[j] <= nums[i]) {    
                j--;    
            }    
            swap(nums, i, j);    
        }    
        reverse(nums, i + 1);    
    }

    private static void reverse(int[] nums, int start) {
        int i = start, j = nums.length - 1;
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    private static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public static void main(String[] args) {
        int [] number={3, 2, 1, 0};
       for (int i=0; i<number.length; i++) {          
            System.out.print(number[i]);
       }
        nextPermutation(number);
        System.out.println();
        for (int j=0; j<number.length; j++) {
            System.out.print(number[j]);
        }
        System.out.println();
    }
}