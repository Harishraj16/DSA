//1315. Sum of Nodes with Even-Valued Grandparent


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     int res_sum = 0;
//     void helper(TreeNode* temp,int GrandParent, int parent,int sub){
//         if(temp==NULL) return;
//         // GrandParent = parent;
//         // parent = sub;
//         // sub = temp;
//         if(GrandParent!=-1 && GrandParent%2==0) res_sum+=temp->val;
//         // helper(temp->left,GrandParent,parent,sub);
//         // helper(temp->right,GrandParent,parent,sub);
//         helper(temp->left,parent,sub,temp->val);
//         helper(temp->right,parent,sub,temp->val);
//     }
//     int sumEvenGrandparent(TreeNode* root) {
//         TreeNode* temp = root;
//         helper(temp,-1,-1,-1);
//         return res_sum;
//     }
// };

class Solution {
public:
    int res_sum = 0;

    void helper(TreeNode* temp, int GrandParent, int parent) {
        if (temp == nullptr) return;

        if (GrandParent != -1 && GrandParent % 2 == 0) {
            res_sum += temp->val;
        }

        helper(temp->left, parent, temp->val);
        helper(temp->right, parent, temp->val);
    }

    int sumEvenGrandparent(TreeNode* root) {
        helper(root, -1, -1);
        return res_sum;
    }
};
