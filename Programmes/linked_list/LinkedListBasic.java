public class LinkedListBasic {	

	public static void main(String[] args) {
		
		System.out.println("Linked List Demo:::");

		Node root=null;
		LinkedList list = new LinkedList();

		root=list.addNextNode(root, 10);
		list.addNextNode(root, 20);
		list.addNextNode(root, 30);
		list.addNextNode(root, 40);
		list.addNextNode(root, 50);
		list.addNextNode(root, 60);
		list.addNextNode(root, 70);
		list.addNextNode(root, 80);
		list.printList(root);

		System.out.println("\nReverse printList::");
		list.printReverse(root);

/*		System.out.println("\n Reveresd List:::::::::::");
		root=list.reverseList(root);
		list.printList(root);
*/
		System.out.println("\n Reversed using Recursion....");
		Node head=list.reverseUsingRecursion(root);
		list.printList(head);

	}
}

class Node {
	int data;
	Node next;

	public Node(int data) {
		this.data=data;
		this.next=null;
	}
}

class LinkedList {
	
	Node root;
	public LinkedList() {
		root=null;
	}
	
	public Node createNewNode(int data) {
		return root = new Node(data);
	}

	public Node addNextNode(Node root, int data) {
		
		if (root==null) {
			return root=createNewNode(data);
		}

		Node newNode = new Node(data);
		Node temp=root;
		while(temp.next!=null) {
			temp=temp.next;
		}

		temp.next=newNode;
		root=temp;
		return root;
	}

	public Node addAtFirst(Node root, int data) {
		if (root==null) {
			return root=createNewNode(data);
		}
		Node newNode = new Node(data);
		newNode.next=root;
		root=newNode;
		return root;
	}

	public int sizeOfList(Node root) {
		int count=0;
		Node temp=root;
		while(temp.next!=null) {
			count++;
			temp=temp.next;
		}
		return count;
	}

	public Node addAtPos(Node root, int pos, int data) {
		if (sizeOfList(root)>pos && pos>0) {
			
			if (pos==1) {
				return root=addAtFirst(root, data);
			}
			if (pos==sizeOfList(root)-1) {
				return root=addNextNode(root, data);
			}

			Node newNode = new Node(data);
			Node temp=root;
			for (int i=0; i<pos; i++) {
				temp=temp.next;
			}
			Node temp2=temp.next;
			temp.next=newNode;
			newNode.next=temp2;

			return root;
		} else {
			System.out.println("Invalid Position Entered...");
		}
		return null;
	}

	public Node reverseUsingRecursion(Node root) {
	 		if (root.next==null) 
	 			return root;

	 		Node ret = reverseUsingRecursion(root.next);
	 		root.next.next=root;
	 		root.next=null;
	 		return ret;
    }

	public Node reverseList(Node root) {
		if (root==null) {
			return root;
		}
		Node prevNode=null;
		Node currNode=root;
		Node nextNode=root;

		while (nextNode!=null) {
			nextNode=nextNode.next;
			currNode.next=prevNode;
			prevNode=currNode;
			currNode=nextNode;
		}
		root=prevNode;
		return root;
	}

	public void printReverse(Node root) {
		if (root==null) {
			return;
		}
		printReverse(root.next);
		System.out.print("->"+root.data);
	}

	public void printList(Node root) {
		Node temp=root;
		while(temp!=null) {
			System.out.print("->"+temp.data);
			temp=temp.next;
		}
	}
}