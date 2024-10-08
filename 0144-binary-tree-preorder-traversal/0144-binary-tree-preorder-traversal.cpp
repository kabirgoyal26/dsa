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
    void preorder(TreeNode* root, vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        // for preorder 
        ans.push_back(root->val);
        preorder( root->left, ans);
        //for inorder 
        //ans.push_back(root->val);
        preorder( root->right, ans);
        //ans.push_back(root->val);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans ;
    
        
    }
};