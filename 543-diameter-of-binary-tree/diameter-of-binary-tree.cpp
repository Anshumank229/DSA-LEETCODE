class Solution {
public:
    int maxdiameter = 0;

    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // diameter through current node
        maxdiameter = max(maxdiameter, leftHeight + rightHeight);

        // return height of current node
        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxdiameter;
    }
};