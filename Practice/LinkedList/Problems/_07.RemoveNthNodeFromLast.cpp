//19. Remove Nth Node From End of List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if(temp->next==NULL && n==1) return NULL;  
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int target = count-n;
        if(target==0) return head->next;
        temp = head;
        count = 0;
        while(temp!=NULL){
            count++;
            if(count==target){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};
