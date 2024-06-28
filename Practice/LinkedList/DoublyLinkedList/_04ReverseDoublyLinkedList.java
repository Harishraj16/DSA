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
