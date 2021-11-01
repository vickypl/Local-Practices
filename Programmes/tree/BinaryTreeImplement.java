import java.util.Stack;
import java.util.Queue;
import java.util.ArrayDeque;
public class BinaryTreeImplement {
	
	public static void main(String[] args) {
		
		System.out.println("Binar tree implements::::");

		Node root=null;
		BinaryTree b1 = new BinaryTree();
		root=b1.insertInto(root, 19);
		b1.insertInto(root, 10);
		b1.insertInto(root, 23);
		b1.insertInto(root, 7);
		b1.insertInto(root, 13);
		b1.insertInto(root, 20);
		b1.insertInto(root, 25);
		b1.insertInto(root, 5);

		//printing binary tree
		System.out.println("+++++++In order++++++++\n");
		b1.printInorder(root);
		// System.out.println();
		// System.out.println("+++++++Pre order++++++++\n");
		// b1.printPreOrder(root);
		// System.out.println();
		// System.out.println("+++++++Post order++++++++\n");
		// b1.printPostOrder(root);


		//searching a element in a tree
		System.out.println();
		System.out.println("++++++SEarching++++++++++++++");
		Node ser = b1.search(root, 19);
		if (ser!=null) {
			System.out.println("element found..: "+ser.data);
		} else {
			System.out.println("element not found..");
		}

		System.out.println("++++++++++++Boolean search+++++++++");
		System.out.println(b1.searchBool(root, 12));

		System.out.println("++++++++++++++++++Height of Tree+++++++++++++++++++");
		System.out.println(b1.findHeight(root));

		System.out.println("+++++++++++++++++Level Order+++++++++++++++++");
		b1.levelOrder(root);
		System.out.println();

		System.out.println("+++++++++++++++Level Order Traversal Using Queue+++++++++++++++");
		b1.printLevelOrder(root);

		System.out.println();
		System.out.println("+++++++++++++++Size of Tree++++++++++++");
		System.out.println(b1.treeSize(root));

		System.out.println();
		System.out.println("+++++++++Sum of all the elements of tree");
		System.out.println(b1.sum(root));

		System.out.println();
		System.out.println("+++++++++Maximum element in the tree");
		System.out.println(b1.max(root));

		System.out.println("++++++++RVERSE In Order");
		Stack<Integer> stk = b1.revInOrder(root);
		while(!stk.isEmpty())
			System.out.print(" "+stk.pop());


		System.out.println("++++++++Mirror Treee++++++++++++");
		Node mirror=b1.mirrorTree(root);
		b1.printInorder(mirror);
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

	public BinaryTree() {
		root=null;
	}

	public Node createNewNode(int data) {
		root = new Node(data);
		return root;
	}

	public Node insertInto(Node root, int data) {
		if (root==null) {
			return root=createNewNode(data);
		}
		if (root.data>data) {
			root.left = insertInto(root.left, data);
		}
		if (data>root.data) {
			root.right = insertInto(root.right, data);
		}
		return root;
	}

	public boolean searchBool(Node root, int item) {
		
		if (root==null || root.data==item) 
			return true;
		
		if (item>root.data) 
			searchBool(root.right, item);

		if (item<root.data) 
			searchBool(root.left, item);

		return false;
	}


	public Node search(Node root, int item) {
		
		if (root==null || root.data==item) {
			return root;
		}
		if (item>root.data) {
			return search(root.right, item);
		}
		if (item<root.data) {
			return search(root.left, item);
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

	public static void printPreOrder(Node root) {
		if (root==null) {
			return ;
		}

		System.out.print(root.data+" ");
		printPreOrder(root.left);
		printPreOrder(root.right);

	}

	public static void printPostOrder(Node root) {
		if (root==null) {
			return;
		}
		printPostOrder(root.left);
		printPostOrder(root.right);
		System.out.print(root.data+" ");
	}

	public static void levelOrder(Node root) {
		for (int i=1; i<=findHeight(root)+1; i++) {
			givenOrder(root, i);
		}
	}

	public static void givenOrder(Node root, int level) {
		if (root==null) {
			return;
		}
		if (level==1) {
			System.out.print(" "+root.data);
		} else if (level>1) {
			givenOrder(root.left, level-1);
			givenOrder(root.right, level-1);
		}

	}

	public static int findHeight(Node root) {
		if (root==null)
			return -1; //if here -1 thn height according to edges if its 0 then
						//height is according to nodes

		return Math.max(findHeight(root.left), findHeight(root.right))+1;
	}

	public static int treeSize(Node root) {
		if (root==null) {
			return 0;
		}
		int ls=treeSize(root.left);
		int rs=treeSize(root.right);
		int ts=ls+rs+1;
		return ts;
	}

	public static int sum(Node root) {
		if (root==null) {
			return 0;
		}
		int lftsm=sum(root.left);
		int rtsm=sum(root.right);
		int totalsm = lftsm+rtsm+root.data;
		return totalsm;
	}

	public static int max(Node root) {
		if (root==null) {
			return -1;
		}
		int lm=max(root.left);
		int lr=max(root.right);

		return Math.max(root.data, Math.max(lm, lr));
	}

	public static void printLevelOrder(Node root) {

		Queue<Node> mq = new ArrayDeque<Node>();
		mq.add(root);
		while(mq.size()>0) {
			int count=mq.size();
			for (int i=0; i<count; i++) {
				root=mq.remove();
				System.out.print(" "+root.data);
				if (root.left!=null) {
					mq.add(root.left);
				}
				if (root.right!=null) {
					mq.add(root.right);
				}
			}
		}
	}

	static Stack<Integer> stack = new Stack<Integer>();
	public static Stack<Integer> revInOrder(Node root) {
		if (root==null) {
			return stack;
		}

		revInOrder(root.left);
		stack.push(root.data);
		revInOrder(root.right);
		return stack;
	}

	public static Node mirrorTree(Node root) {
		if (root==null) {
			return root;
		}
		Node temp = root.left;
		root.left=root.right;
		root.right=temp;

		if (root.left!=null) {
			mirrorTree(root.left);
		}
		if (root.right!=null) {
			mirrorTree(root.right);
		}
		return root;
	}
}