//1302. Deepest Leaves Sum

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
    int tot_sum = 0,maxi = 0;
    void maximum(TreeNode* root,int count){
        if(root==NULL) return;
        maxi = max(maxi,count);
        maximum(root->left,count+1);
        maximum(root->right,count+1);
    }
    void deepest(TreeNode* root,int count){
        if(root==NULL) return;
        if(maxi==count) tot_sum+=root->val;
        deepest(root->left,count+1);
        deepest(root->right,count+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        maximum(root,0);
        deepest(root,0);
        return tot_sum;
    }
};
