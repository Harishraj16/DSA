class Node{
    int data;
    Node next;
    
    Node(int data1,Node next1){
        this.data = data1;
        this.next = next1;
    }
    
    Node(int data1){
        this.data = data1;
        this.next = null;
    }
}

public class LinkedList {
    public static void main(String[] args) {
        int[] arr = {5,3,9,2,6};
        Node head = ConverArr2LL(arr);
        if(contains(10,head)) System.out.print("Present!");
        else System.out.print("Not Present!");
    }

    private static boolean contains(int i,Node head) {
        Node temp = head;
        while(temp!=null){
            if(temp.data == i) return true;
            temp = temp.next;
        }
        return false;
    }

    private static int length(Node head) {
        int count = 0;
        Node temp = head;
        while(temp!= null){
            count+=1;
            temp = temp.next;
        }
        return count;
    }

    private static void printLL(Node head) {
        Node temp = head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
    }

    private static Node ConverArr2LL(int[] arr) {
        Node head = new Node(arr[0]);
        Node mover = head;
        for(int i=1;i<arr.length;i++){
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = temp;
        }
        return head;
    }
}
