class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;
        while(q.size()>0){
            int size=q.size();
            vector<int> row(size);
            for(int i=0; i<size; i++){
                TreeNode* curr=q.front();
                q.pop();

                int index = leftToRight? i:(size-i-1);
                row[index] = curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            leftToRight = !leftToRight;
            ans.push_back(row);
        }
        return ans;
    }
};
