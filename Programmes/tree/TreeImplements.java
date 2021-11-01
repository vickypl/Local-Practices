public class TreeImplements {
	
	public static void main(String[] args) {
		
		System.out.println("Tree Implentation...");
		
		BinaryTree b1 = new BinaryTree(19);
		b1.root.left = new Node(10);
		b1.root.right = new Node(23);
		b1.root.left.left = new Node(7);
		b1.root.left.right = new Node(13);
		b1.root.right.left = new Node(20);
		b1.root.right.right = new Node(25);

		System.out.println("Pre Order: ");
		b1.printPreOrder(b1.root);
		System.out.println();
		System.out.println("In Order: ");
		b1.printInorder(b1.root);
		System.out.println();
		System.out.println("Post Order: ");
		b1.printPostOrder(b1.root);

	}

}

class Node {
	
	int data;
	Node left;
	Node right;

	public Node(int data) {
		this.data=data;
		this.left=null;
		this.right=null;
	}
}

class BinaryTree {
	
	Node root;

	public BinaryTree(int data) {
		root=new Node(data);
	}

	BinaryTree() {
		root = null;
	}

	public static void printInorder(Node root) {
        if (root == null)
            return;
 
        printInorder(root.left);
        System.out.print(root.data + " ");
        printInorder(root.right);
	}

	public static void printPreOrder(Node root) {
        if (root == null)
            return;
 
        System.out.print(root.data + " ");
        printInorder(root.left);
        printInorder(root.right);		
	}

	public static void printPostOrder(Node root) {
        if (root == null)
            return;
 
        printInorder(root.left);
        printInorder(root.right);		
        System.out.print(root.data + " ");
	}

}