//Time Comp: O(2n) ==> O(n)
//Space Comp: O(n)   --> we explicitly using a stack 

public static Node reverseDLL(Node  head)
{
    Stack<Integer> st = new Stack<>();
    Node temp = head;
    while(temp!=null){
        st.add(temp.data);
        temp = temp.next;
    }
    temp = head;
    while(temp!=null){
        temp.data = st.pop();
        temp = temp.next;
    }
    return head;
}


//Optimal way
//Time Comp: O(n)  Space Comp: O(1)

public static Node reverseDLL(Node  head)
{
    if(head==null || head.next==null) return head;
    Node prev = null;
    Node curr = head;
    while(curr!=null){
        prev = curr.prev;
        curr.prev = curr.next;
        curr.next = prev;
        curr = curr.prev;
    }
    return prev.prev;
}
