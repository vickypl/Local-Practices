import java.util.*;

public class Queue {
	
	public static void main(String[] args) {
		
		Que q1 = new Que(5);
		q1.enque(10);
		q1.enque(20);
		q1.enque(30);


		System.out.println(q1.deque());
		System.out.println(q1.deque());
		System.out.println(q1.deque());
		q1.enque(60);
		q1.enque(70);
		q1.enque(80);
		System.out.println(q1.deque());
		System.out.println(q1.deque());
		System.out.println(q1.deque());
		

	}
}

class Que {
	int[] que=null;
	int cap;
	int front;
	int rear;
	int size;

	public Que(int x) {
		que = new int[x];
		this.cap=x;
		this.front=-1;
		this.rear=-1;
		this.size=-1;
	}

	public void enque(int data) {
		if (size==cap-1) {
			System.out.println("QueOverFlow...");
			return;
		} else {
			rear++;
			que[rear]=data;
			size++;
			System.out.println("inserted::"+data);
		}
	}

	public int deque() {
		int item=-1;
		if (front==size) {
			System.out.println("Que UnderFlow...");
		} else {
			front++;
			item=que[front];
		}
		return item;
	}

}