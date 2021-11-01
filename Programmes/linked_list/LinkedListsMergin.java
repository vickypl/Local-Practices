public class LinkedListsMergin {
	
	static class Node {
		int data;
		Node next;
		public Node(int data) {
			this.data = data;
			next=null;
		}
	}


	public static Node addNewNode(Node head, int data) {
		if (head==null) {
			head = new Node(data);
		} else {
			Node newNode = new Node(data);
			Node temp = head;
			while(temp.next!=null) {
				temp=temp.next;
			}
			temp.next=newNode;
		}
		return head;
	}


	public static void main(String[] args) {
		
		Node head = null;
		head=addNewNode(head, 10);
		head=addNewNode(head, 20);
		head=addNewNode(head, 30);
		head=addNewNode(head, 40);
		head=addNewNode(head, 50);

		while(head!=null) {
			System.out.println(head.data);
			head=head.next;
		}

	}
}