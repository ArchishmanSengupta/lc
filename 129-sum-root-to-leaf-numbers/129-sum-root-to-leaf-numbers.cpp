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
        int result = 0;
        
        void sumRootToLeaf(TreeNode* root, int sum){
                if(!root) return;
                sum=sum*10+root->val;
                if(!root->left and !root->right){
                     result+=sum;
                        return;
                }
                sumRootToLeaf(root->left,sum);
                sumRootToLeaf(root->right,sum);
                
        }
    int sumNumbers(TreeNode* root) {
     result = 0;
            sumRootToLeaf(root,0);
            return result;
    }
};