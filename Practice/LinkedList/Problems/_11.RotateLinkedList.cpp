//61. Rotate List


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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!k || !head || !head->next)  return head;
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        k = k%count;
        if(!k) return head;
        temp = head;
        for(int i=1;i<count-k;i++) temp = temp->next;
        ListNode* res = temp->next;
        temp->next = NULL;
        temp = res;
        while(temp!=NULL && temp->next!=NULL) temp = temp->next;
        if(temp!=NULL)temp->next = head;
        return res;
    }
};
