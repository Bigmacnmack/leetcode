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
    int diameterOfBinaryTree(TreeNode* root) {
        int n=0;
        rec(root,n);
        return n;
        
    }
    
    
private:
    int rec(TreeNode* root, int& n)
    {
        if(!root) return 0;
        int lr=rec(root->left,n);
        int rr=rec(root->right,n);
        n=max(n,lr+rr);
        return max(lr, rr) + 1;

    }
};