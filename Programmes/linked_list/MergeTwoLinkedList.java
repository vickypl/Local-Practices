public class MergeTwoLinkedList {
	
	public static void main(String[] args) {
		
		Node head1 = null;
		head1 = new Node(10);
		head1.next = new Node(20);
		head1.next.next = new Node(30);
		head1.next.next.next = new Node(40);

		Node head2 = null;
		head2 = new Node(11);
		head2.next = new Node(22);
		head2.next.next = new Node(33);
		head2.next.next.next = new Node(44);

		while(head1!=null && head2!=null) {
			if (head1.data>head2.data) {
				head1.next=head2;
				head1=head1.next;
			} else {
				head2.next=head1;
				head2=head2.next;
			}
			while(head1!=null) {
				head1=head1.next;
			}
			while(head2!=null) {
				head2=head2.next;
			}
		}

		while(head1!=null) {
			System.out.println(head1.data);
		}

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