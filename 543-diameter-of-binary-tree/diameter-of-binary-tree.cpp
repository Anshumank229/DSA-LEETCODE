class Solution {
public:
    int maxdiameter = 0;

    int level_of_tree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        return 1 + max(level_of_tree(root->left),
                       level_of_tree(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int dia = level_of_tree(root->left) + level_of_tree(root->right);

        maxdiameter = max(maxdiameter, dia);

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return maxdiameter;
    }
};