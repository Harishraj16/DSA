//2. Add Two Numbers


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;

        // Traverse both linked lists
        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            // Update carry for the next iteration
            carry = sum / 10;
            sum = sum % 10;
            
            // Create a new node with the current sum
            current->next = new ListNode(sum);
            current = current->next;
        }

        // Get the head of the resulting list
        ListNode* resultHead = dummy->next;
        delete dummy; // Clean up the dummy node

        return resultHead;
    }
};
