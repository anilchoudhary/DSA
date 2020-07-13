class Solution {
public:
	bool isSameTree(TreeNode* t1, TreeNode* t2) {
		if (t1 == NULL && t2 == NULL) return true;
		if (t1 == NULL || t2 == NULL) return false;
		return (t1->val == t2->val)
		       && isSameTree(t1->right, t2->right)
		       && isSameTree(t1->left, t2->left);
	}

};