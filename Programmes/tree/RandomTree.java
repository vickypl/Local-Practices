public class RandomTree {
	
	public static void main(String[] args) {
		
		Node root = null;
		Tree tree = new Tree();
		tree.insertInto(root, 54);
		tree.insertInto(root, 64);
		tree.insertInto(root, 23);
		tree.insertInto(root, 65);
		tree.insertInto(root, 42);
		tree.insertInto(root, 32);
		tree.insertInto(root, 16);
		tree.insertInto(root, 87);

		tree.printInorder(root);
	}
}

class Node {
	int data;
	Node left, right;

	public Node(int data) {
		this.data=data;
		this.left=null;
		this.right=null;
	}

}

class Tree {
	
	Node root;

	public Tree() {
		root=null;
	}

	public Node createNewNode(int data) {
		return root = new Node(data);
	}

	public Node insertInto(Node root, int data) {
		if (root==null) {
			return root=createNewNode(data);
		}
		if (root.right!=null) {
			root.right = new Node(data);
		}
		if (root.left!=null) {
			root.left = new Node(data);
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