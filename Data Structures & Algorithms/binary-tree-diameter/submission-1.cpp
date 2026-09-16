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
    int ans=0;
    int Height(TreeNode*root){
        if(root==nullptr) return 0;
        int leftDiameter = Height(root->left);
        int rightDiameter = Height(root->right);
        ans = max(ans, leftDiameter+rightDiameter);
        return max(leftDiameter,rightDiameter)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        Height(root);
        return ans;
    }
};
