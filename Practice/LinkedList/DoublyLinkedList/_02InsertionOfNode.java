class GfG
{
    //Function to insert a new node at given position in doubly linked list.
    void addNode(Node head, int pos, int data)
	{
		Node iterator = head;
		int count = 0;
		while(iterator != null){
		    if(count == pos) break;
		    count++;
		    iterator = iterator.next;
		}
		Node newNode = new Node(data);
		Node nextNode = iterator.next;
		iterator.next = newNode;
		newNode.prev = iterator;
		newNode.next = nextNode;
	}
}
