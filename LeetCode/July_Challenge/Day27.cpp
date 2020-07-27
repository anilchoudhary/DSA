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

    TreeNode* build(vector<int> inorder, vector<int> postorder, int istart, int iend, int* pind)
    {
        if (istart > iend)
            return NULL;

        TreeNode* node = new TreeNode(postorder[*pind]);
        (*pind)--;

        if (istart == iend)
            return node;

        auto it = find(inorder.begin(), inorder.end(), node->val);
        int iind = it - inorder.begin();

        node->right = build(inorder, postorder, iind + 1, iend, pind);
        node->left = build(inorder, postorder, istart, iind - 1, pind);

        return node;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
        int pind = postorder.size() - 1;
        return build(inorder, postorder, 0, inorder.size() - 1, &pind);
    }
};