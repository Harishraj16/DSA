class Solution {
    public Node deleteNode(Node head, int x) {
        int curr = 1;
        Node temp = head;
        while(temp!=null){
            if(curr == x) break;
            curr+=1;
            temp = temp.next;
        }
        if(temp.prev==null){
            temp.next.prev = null;
            head = temp.next;
        }else if(temp.next == null){
            temp.prev.next = null;
        }else{
            temp.prev.next = temp.next;
            temp.next.prev = temp.prev;
        }
        return head;
    }
}
