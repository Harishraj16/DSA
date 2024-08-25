class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        vector<int> ls;
        while(root!=NULL){
            Node* temp = root;
            while(temp!=NULL){
                ls.push_back(temp->data);
                temp = temp->bottom;
            }
            root = root->next;
        }
        sort(ls.begin(),ls.end());
        int n = ls.size();
        Node* head = new Node(ls[0]);
        Node* curr = head;
        for(int i=1;i<n;i++){
            curr->bottom = new Node(ls[i]);
            curr = curr->bottom;
        }
        return head;
    }
};
