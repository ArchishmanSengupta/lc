class Solution { // dfs approach 
public:
    int getDepthOfTree(TreeNode* root){
        if(!root) return 0;
        return 1+max(getDepthOfTree(root->left), getDepthOfTree(root->right));
    }
    int deepestLeavesSum(TreeNode* root, int currentLevel, int maxLevel){
        if(!root) return 0;
        if(root && currentLevel==maxLevel) return root->val;
        return deepestLeavesSum(root->left, currentLevel+1, maxLevel) + deepestLeavesSum(root->right, currentLevel+1, maxLevel);
    }
    int deepestLeavesSum(TreeNode* root) {
        int depth(getDepthOfTree(root));
        return deepestLeavesSum(root, 1, depth);
    }
};