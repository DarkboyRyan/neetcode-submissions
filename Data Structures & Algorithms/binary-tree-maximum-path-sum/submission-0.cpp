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
    int maxPathSum(TreeNode* root) {
        int sum = root->val;
        dfs(root,sum);
        return sum;
    }
private:
    int dfs(TreeNode* node,int& sum){
        if(!node) return 0;

        int LMax = max(dfs(node->left,sum),0);  
        int rMax = max(dfs(node->right,sum),0);

        sum = max(sum, node->val + LMax + rMax);
        return node->val + max(LMax,rMax);
    }
};
