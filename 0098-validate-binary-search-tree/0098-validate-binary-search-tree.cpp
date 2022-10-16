class Solution {
public:
       bool isValidBST(TreeNode* root, long mini, long maxi){
               if(root == NULL) return true;
               if(root->val >= maxi or root->val<=mini) return false;
               return isValidBST(root->left,mini, root->val) and isValidBST(root->right,root->val,maxi);
       }
    bool isValidBST(TreeNode* root) {
             return isValidBST(root,LLONG_MIN,LLONG_MAX);
    }
};