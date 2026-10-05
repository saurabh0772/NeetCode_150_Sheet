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

    bool identical(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;

        if((!p && q) || (p && !q)) return false;
        if(p->val != q->val) return false;

        return identical(p->left, q->left) && identical(p->right, q->right);
    }

    
    
    bool isSubtree(TreeNode* root, TreeNode* sub) {
        
        if(root == NULL) return false;

            if(identical(root, sub))  return true;
        
        bool l = isSubtree(root->left, sub);
        bool r = isSubtree(root->right, sub);
        return l || r;
    }
};
