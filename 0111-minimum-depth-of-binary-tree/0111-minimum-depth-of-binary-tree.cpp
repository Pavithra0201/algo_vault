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
    int minDepth(TreeNode* root) {
        int depth=0;
        if (root==NULL)
            return 0;
        int l_depth=minDepth(root->left);
        int r_depth=minDepth(root->right);

        if (root->left==NULL || root->right==NULL)
            return 1+max(l_depth,r_depth);

        return 1+min(l_depth,r_depth);

        
    }
};