class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null || head.next == null) return head;

        Stack<Integer> st = new Stack<>();
        ListNode temp = head;
        while(temp!=null){
            st.push(temp.val);
            temp = temp.next;
        }
        temp = head;
        while(temp!=null){
            temp.val = st.pop();
            temp = temp.next;
        }
        return head;
    }
}


class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null || head.next==null) return head;
        ListNode prev = null;
        ListNode curr = head;
        ListNode next = null;
        while(curr!=null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
}


class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null || head.next==null) return head;
        ListNode newHead = reverseList(head.next);
        ListNode next = head.next;
        next.next = head;
        head.next = null;
        return newHead;
    }
}
