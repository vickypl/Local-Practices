import java.util.*;

public class BinaryTreeBasic {

	public static void main(String[] args) {
		
		Node root = null;
		BinaryTree tree = new BinaryTree();
		root = tree.insertInto(root, 19);
		tree.insertInto(root, 12);
		tree.insertInto(root, 23);
		tree.insertInto(root, 7);
		tree.insertInto(root, 13);
		tree.insertInto(root, 20);
		//tree.insertInto(root, 21);
		tree.insertInto(root, 25);
		//tree.insertInto(root, 5);

		System.out.println(tree.findPreSuc(root, 13));


		System.out.println("______________________");

//		System.out.println(tree.inorderPre(root, 13));


		System.out.println(tree.isBst(root));

		System.out.println("Level Order Traversal...........");
		tree.printLevelOrder(root);
		System.out.println();



		System.out.println("minimumElement::"+ tree.minimumElement(root));
		System.out.println("maximumElement::"+ tree.maximumElement(root));


		System.out.println("Is isBalanced: "+tree.isBalanced(root));

		System.out.println();
		System.out.println("Height of the tree:::"+tree.height(root));


		tree.inOrderPrint(root);
		root=tree.actualDelete(root, 12);
		System.out.println();
		tree.inOrderPrint(root);


/*		tree.inOrderPrint(root);
		root=tree.deleteByvalue(root, 12);
		System.out.println();
		tree.inOrderPrint(root);*/



/*		System.out.println("++IN order print..++++++++++");
	
		System.out.println("++++++++In order Iterative+++++++++++");
		tree.inOrderIterative(root);*/
	}
	
}

class Node {
	int data;
	Node right;
	Node left;

	public Node(int data) {
		this.data=data;
		this.right=null;
		this.left=null;
	}
}

class BinaryTree {
	
	Node root;

	public BinaryTree() {
		root=null;
	}

	public Node createNewNode(int data) {
		return root = new Node(data);
	}

	public Node insertInto(Node root, int data) {
		if (root==null) {
			return root=createNewNode(data);
		}
		if (data>root.data) {
			root.right=insertInto(root.right, data);
		}
		if (data<root.data) {
			root.left=insertInto(root.left, data);
		}
		return root;
	}

	public void inOrderPrint(Node root) {
		if (root==null) {
			return;
		}

		inOrderPrint(root.left);
			if (root.data!=-1) {
				System.out.print(" "+root.data);
			}
		inOrderPrint(root.right);
	}

	public void inOrderIterative(Node root) {
		Stack<Node> stack = new Stack<Node>();
		while(!stack.isEmpty() || root!=null) {
			if (root!=null) {
				stack.push(root);
				root=root.left;
			} else {
				root=stack.pop();
				System.out.print(" "+root.data);
				root=root.right;
			}
		}
	}

	public Node actualDelete(Node root, int key) {
		if(root==null)
			return root;
		
		if (root.data==key) {
			if (root.right!=null && root.left!=null) {
				Node successor = getSuccessor(root);
				root.data=successor.data;
				root.right=deleteByvalue(root.right, successor.data);
			} else if (root.left==null && root.right!=null) {
				root.data=root.right.data;
				root.right=null;
			} else if (root.left!=null && root.right==null) {
				root.data=root.left.data;
				root.left=null;
			} else if (root.left==null && root.right==null) {
				root=null;
			}
		}

		if (key<root.data) {
			deleteByvalue(root.left, key);
		}

		if (key>root.data) {
			deleteByvalue(root.right, key);
		}
		return root;
	}

	public Node deleteByvalue(Node root, int key) {
		if(root==null)
			return root;
		
		if (root.data==key) {
			if (root.right!=null && root.left!=null) {
				Node successor = getSuccessor(root);
				root.data=successor.data;
				root.right=deleteByvalue(root.right, successor.data);
			} else if (root.left==null && root.right!=null) {
				root.data=root.right.data;
				root.right.data=-1;
			} else if (root.left!=null && root.right==null) {
				root.data=root.left.data;
				root.left.data=-1;
			} else if (root.left==null && root.right==null) {
				root.data=-1;
			}
		}

		if (key<root.data) {
			deleteByvalue(root.left, key);
		}

		if (key>root.data) {
			deleteByvalue(root.right, key);
		}
		return root;
	}

	public Node getSuccessor(Node root) {
		if (root==null) {
			return root;
		}
		Node temp = root.right;
		while(temp.left!=null) {
			temp=temp.left;
		}
		return temp;
	}

	public int height(Node root) {
        if(root==null)
            return 0;
        return 1+Math.max(height(root.left), height(root.right));
    }

	public boolean isBalanced(Node root) {
		
		int lefth=0;
		int righth=0;

		if (root==null) {
			return true;
		}

		lefth=height(root.left);
		righth=height(root.right);

		if(Math.abs(lefth-righth)<=1 && isBalanced(root.left) && isBalanced(root.right))
			return true;

		return false;
	}

	public int minimumElement(Node root) {
			if (root == null)
		        return Integer.MAX_VALUE;
		  
		    int res = root.data;
		    int lres = minimumElement(root.left);
		    int rres = minimumElement(root.right);
		  

		    return Math.min(res, Math.min(lres, rres));
	}

	public int maximumElement(Node root) {
			if (root == null)
            	return Integer.MIN_VALUE;
  
	        int res = root.data;
	        int lres = maximumElement(root.left);
	        int rres = maximumElement(root.right);
	  
			return Math.max(res, Math.max(lres, rres));
	}

	void printLevelOrder(Node root) {
        int h = height(root);
        for (int i=1; i<=h; i++)
            printGivenLevel(root, i);
    }

	public void printGivenLevel (Node root ,int level) {
        if (root == null)
            return;
        if (level == 1)
            System.out.print(root.data + " ");
        else if (level > 1)
        {
            printGivenLevel(root.left, level-1);
            printGivenLevel(root.right, level-1);
        }
    }

    public boolean isBst(Node root) {

    	if (root==null) {
    		return true;
    	}

    	if (root.left!=null && root.left.data>root.data) {
    		return false;
    	}

    	if (root.right!=null && root.right.data< root.data) {
    		return false;
    	}

    	if (!isBst(root.left) || !isBst(root.right)) {
    		return false;
    	}

    	return true;
    }

 
// Function that finds predecessor
// and successor of key in BST.
public ArrayList<Integer> findPreSuc(Node root, int key) {
	
	ArrayList<Integer> list = new ArrayList<Integer>();


	Node pre=null;
	Node suc=null;

    if (root == null)
        return list;
    while (root != null)
    {
        if (root.data == key)
        {
            if (root.right != null)
            {
                suc = root.right;
                while (suc.left != null)
                    suc = suc.left;
            }
 
            if (root.left != null)
            {
                pre = root.left;
                while (pre.right != null)
                    pre = pre.right;
            }
            return list;
        } else if (root.data < key) {
            pre = root;
            root = root.right;
        } else {
            	suc = root;
            	root = root.left;
        	}
    	}
    	list.add(pre.data);
    	list.add(suc.data);
		return list;
	}
}
