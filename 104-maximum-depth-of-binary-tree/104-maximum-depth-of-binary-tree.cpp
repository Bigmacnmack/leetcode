
class Solution 
{
    
public:
    int maxDepth(TreeNode* root) 
    {
        if(!root)
            return 0;
            
        int maxl=maxDepth(root->left);
        int maxr=maxDepth(root->right);
        
        return max(maxl,maxr)+1;
        
        
        
    }
    

};