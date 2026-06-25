class Solution {
public:
    int ans = 0;
    int height(TreeNode* p){
        if(p==NULL){
            return 0;
        }
        int leftHeight = height(p->left);
        int rightHeight = height(p->right);
        ans = max(leftHeight+rightHeight,ans);

        return max(leftHeight,rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
