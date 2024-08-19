//1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* search(TreeNode*  cloned,int value){
        if(cloned==NULL)return NULL;
        if(cloned->val==value)return cloned;
        TreeNode* left= search(cloned->left,value);
        if(left)return left;
        TreeNode* right= search(cloned->right,value);
        if(right)return right;
        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int value=target->val;
        return search(cloned, value);
    }
};
