/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode temp = head;
        while(temp!=null){
            ListNode curr = temp;
            if(temp.val == -99999) return true;
            temp.val = -99999;
            temp = temp.next;
            curr.next = null;
        }
        return false;
    }
}
