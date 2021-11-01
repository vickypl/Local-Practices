import java.util.Queue;
import java.util.ArrayList;
import java.util.TreeMap;
import java.util.LinkedList;
import java.util.Map;

public class VerticalOrder {
	
	public static void main(String[] args) {
		
		System.out.println("++++++Tree Verticle order traversal");
		Node root=null;
		BinaryTree tree = new BinaryTree();
		root=tree.insertInto(root, 10);
		root=tree.insertInto(root, 5);
		root=tree.insertInto(root, 15);
		root=tree.insertInto(root, 3);
		root=tree.insertInto(root, 6);
		root=tree.insertInto(root, 12);
		root=tree.insertInto(root, 20);
		tree.printInOrder(root);

		System.out.println("++++++Vertical Order Travasal+++++++");
		ArrayList<Integer> listed = tree.verticalOrder(root);
		
		for (int x : listed) {
			System.out.print(" "+x);
		}
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
			return root = createNewNode(data);
		}
		Node newNode = new Node(data);
		if (data<root.data) {
			root.left=insertInto(root.left, data);
		}
		if (data>root.data) {
			root.right=insertInto(root.right, data);
		}
		return root;
	}

	public void printInOrder(Node root) {
		if (root==null) {
			return;
		}
		printInOrder(root.left);
		System.out.print(" "+root.data);
		printInOrder(root.right);
	}

	public ArrayList<Integer> verticalOrder(Node root) {

		ArrayList<Integer> list = new ArrayList<Integer>();

		TreeMap<Integer, ArrayList<Integer>> m = new TreeMap<>();
		int hd=0;

		Queue<Qobj> que = new LinkedList<Qobj>();

		que.add(new Qobj(0, root));

		while(!que.isEmpty()) {
			
			Qobj temp = que.poll();
                 hd = temp.hd;
            Node node = temp.node;
 
            if (m.containsKey(hd)) {
                m.get(hd).add(node.data);
            } else {
                ArrayList<Integer> al = new ArrayList<>();
                al.add(node.data);
                m.put(hd, al);
            }
            if (node.left != null)
                que.add(new Qobj(hd - 1, node.left));
            if (node.right != null)
                que.add(new Qobj(hd + 1, node.right));
		}

		for (Map.Entry<Integer, ArrayList<Integer>> entry : m.entrySet()) {
            ArrayList<Integer> al = entry.getValue();
            for (Integer i : al)
            	list.add(i);
            //     System.out.print(i + " ");
            // System.out.println();
        }

		return list;
	}
}

class Qobj {
    int hd;
    Node node;
    Qobj(int hd, Node node)
    {
        this.hd = hd;
        this.node = node;
    }
}