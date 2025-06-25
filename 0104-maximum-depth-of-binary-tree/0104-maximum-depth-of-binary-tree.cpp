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
    int maxDepth(TreeNode* root) {
        int depth=0;
        TreeNode* left,right;
       if(root==NULL) return 0;     
     
   int l_depth= maxDepth(root->left);
    int r_depth=maxDepth(root->right);
      
        return 1+max(l_depth,r_depth);
        
    }
};