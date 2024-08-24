//25. Reverse Nodes in k-Group


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
    ListNode* helper(ListNode* temp,int count,int k,stack<int>& st){
        if(count>=k){
            int size = st.size();
            stack<int> new_st;
            while(!st.empty()){
                new_st.push(st.top());
                st.pop();
            }
            st = new_st;
            return temp;
        };
        st.push(temp->val);
        ListNode* res = helper(temp->next,count+1,k,st);
        temp->val = st.top();
        st.pop();
        return res;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode* temp = head;
        int n = 0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        for(int i=0;i<n/k;i++){
            stack<int> st;
            temp = helper(temp,0,k,st);
        }
        return head;
    }
};
