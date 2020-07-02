class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        if (root == NULL) {
            return result;
        }
        q.push(root);
        while (!q.empty()) {
            int s = q.size();
            vector<int> level;
            while (s--) {
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            result.push_back(level);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};