public class TreeTest {
	
	public static void main(String[] args) {
		
		Node root=null;
		BTree b1 = new BTree();
		root=b1.insertInto(root, 1);
		b1.insertInto(root, 2);
		b1.insertInto(root, 3);
		b1.insertInto(root, 4);
		b1.insertInto(root, 5);
		b1.printInorder(root);

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

class BTree {

	Node root;

	public BTree() {
		root=null;
	}

	public Node createNewNode(int data) {
		root = new Node(data);
		return root;
	}

	public Node insertInto(Node root, int data) {
		if (root==null) {
			return createNewNode(data);
		}
		if (root.data>data) {
			root.left = insertInto(root.left, data);
		}
		if (root.data<data) {
			root.right = insertInto(root.right, data);
		}
		return root;
	}

	public static void printInorder(Node root) {
        if (root == null)
            return;
	 
        printInorder(root.left);
        System.out.print(root.data + " ");
        printInorder(root.right);
	}

}
