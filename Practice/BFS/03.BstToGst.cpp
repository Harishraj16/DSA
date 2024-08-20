//1038. Binary Search Tree to Greater Sum Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int value = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL) return NULL;
        bstToGst(root->right);
        value+=root->val;
        root->val = value;
        bstToGst(root->left);
        return root;
    }
};
