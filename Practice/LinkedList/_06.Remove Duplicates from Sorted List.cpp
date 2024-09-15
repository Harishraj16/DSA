class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        
        ListNode* prev = head;
        ListNode* temp = head->next;
        
        while (temp != NULL) {
            if (prev->val == temp->val) {
                prev->next = temp->next;
                delete temp;  
                temp = prev->next;  
            } 
            else {
                prev = temp;  
                temp = temp->next;  
            }
        }
        
        return head;
    }
};
