public class MyLinkedList<E>{
	
	Node head;
	void add(E data) {
		Node toAdd = new Node(data);
		if(isEmpty()) {
			head = toAdd;
			return;
		}
		Node temp = head;
		while(temp.next!=null) {
			temp = temp.next;
		}
		temp.next = toAdd;
	}
	public boolean isEmpty(){
		return head==null;
	}
	public E toRemove() throws Exception{
		Node<E> temp = head;
		if(isEmpty()) {
			throw new Exception("Cannot delete from empty linked list.");
		}
		while(temp.next.next!=null) {
			temp=temp.next;
		}
		Node<E> toDelete = temp.next;
		temp.next = null;
		return toDelete.data;	
	}
	public E toRemoveQueue() throws Exception{
		Node<E> temp = head;
		if(isEmpty()) {
			throw new Exception("Cannot remove from empty linked list");
		}
		if(temp.next==null) {
			head = null;
			return temp.data;
		}
		head = head.next;
		return temp.data;
	}
	public E queueElement() throws Exception{
		Node<E> temp = head;
		if(isEmpty()) {
			throw new Exception("Cannot view from empty linked list");
		}
		return temp.data;
	}
	public E toPeek() throws Exception{
		Node<E> temp = head;
		if(isEmpty()) {
			throw new Exception("Cannot peek from empty linked list.");
		}
		while(temp.next!=null) {
			temp = temp.next;
		}
		return temp.data;
	}
	void print() {
		Node temp=head;
		while(temp!=null) {
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}
	static class Node<E>{
		E data;
		Node next;
		public Node(E data) {
			this.data = data;
			next = null;
		}
	}
}
