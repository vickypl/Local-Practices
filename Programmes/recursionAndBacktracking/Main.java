import java.util.Arrays;
import java.util.List;
import java.util.Stack;
 
class Main
{
    // Insert the given key in the sorted stack while maintaining its
    // sorted order. This is similar to recursive Insertion sort routine.
    public static void sortedInsert(Stack<Integer> stack, int key)
    {
        // Base case: if the stack is empty or
        // the key is greater than all elements in the stack
        if (stack.isEmpty() || key > stack.peek())
        {
            stack.push(key);
            return;
        }
        // We reach here when the key is smaller than the top element
        // Remove the top element
        int top = stack.pop();
        // recur for the remaining elements in the stack
        sortedInsert(stack, key);
        // insert the popped element back in the stack
        stack.push(top);
    }
    // Recursive method to sort a stack
    public static void sortStack(Stack<Integer> stack)
    {
        // Base case: stack is empty
        if (stack.isEmpty()) {
            return;
        }
        // remove the top element
        int top = stack.pop();
        // recur for the remaining elements in the stack
        sortStack(stack);
        // insert the popped element back in the sorted stack
        sortedInsert(stack, top);
    }
    public static void main(String[] args)
    {
        List<Integer> list = Arrays.asList(5, -2, 9, -7, 3);
 
        Stack<Integer> stack = new Stack<>();
 
        stack.addAll(list);
 
        System.out.println("Stack before sorting : " + stack);
        sortStack(stack);
        System.out.println("Stack after sorting  : " + stack);
    }
}