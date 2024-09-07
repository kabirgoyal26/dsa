/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
     
     // check function 

     bool check(ListNode* &head, TreeNode* & root)
     {
        // agar head lhatam ho gya to true hoga 
        if (head==NULL)
        {
            return true ;
        }


        // agra root null hogi to matlab pura travese ho gaya and kuch nhiu malla
        if (root == NULL)
        {
            return NULL;
        }


        // checking 
        if (head->val != root->val)
        {
            return false ; 
        }

        return check(head->next,root->left)|| check (head->next, root->right);
     }



    bool isSubPath(ListNode* head, TreeNode* root) {

        // agar root ha he nhi 

        if (root == NULL)
        {
            return false ;
        }


        return check(head,root)||isSubPath(head,root->left)||isSubPath(head,root->right);
        
    }
};