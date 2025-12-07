int maxDepth(TreeNode* root) {
    if(!root)
        return 0;
    int left = maxDepth(root->left), right = maxDepth(root->right);
    return 1+max(left, right);
}
