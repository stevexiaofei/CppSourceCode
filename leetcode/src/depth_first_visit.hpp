#include<iostream>
using namespace std;
class Solution{
public:
	int counts = 0;
	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
	};
	void print(TreeNode *node,int level) {
		if (counts == level&&node!=nullptr) {
			cout << node->val << endl;
			counts++;
		}
		if(node->left != nullptr)
			print(node->left,level + 1);
		if(node->right != nullptr)
			print(node->right, level + 1);
	}
};