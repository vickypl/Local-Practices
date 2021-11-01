public class ListDemo {

	public static void main(String[] args) {
		
		Node head=null;
		Node node1 = new Node(10);
		Node node2 = new Node(20);
		Node node3 = new Node(30);
		Node node4 = new Node(40);

		head=node1;
		node1.next=node2;
		node2.prev=node1;
		node2.next=node3;
		node3.prev=node2;
		node3.next=node4;
		node4.prev=node3;
		node4.next=null;

		int data=11;
		Action act = new Action();
		//Node news = act.createNewNode(data);
		head = act.insertNodeAtFirst(head, data);
		
		while(head!=null) {
			System.out.print("->"+head.data);
			head=head.next;
		}

	}
	
}

class Action {
	
	public Node createNewNode(int data) {
		Node newNode =  new Node(data);
		return newNode;
	}

	public Node insertNodeAtFirst(Node head, int data) {
		Node newNode= createNewNode(data);
		newNode.next=head.prev;
		head=newNode;
		return head;
	}
}

class Node {

	int data;
	Node prev;
	Node next;

	public Node(int data) {
		this.data=data;
		this.prev=null;
		this.next=null;
	}
	
}