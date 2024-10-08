//938. Range Sum of BST

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
    int ans = 0;
    void rangeSum(TreeNode* root, int low, int high) {
        if(root==NULL) return;
        if(root->val>=low && root->val<=high) ans += root->val;
        rangeSum(root->left,low,high);
        rangeSum(root->right,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        rangeSum(root,low,high);
        return ans;
    }
};
