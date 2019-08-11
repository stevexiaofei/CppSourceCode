#include <gtest/gtest.h>
#include<iostream>
#include <depth_first_visit.hpp>

TEST(test_depth_first_visit, print)
{
	using  Treenode =typename Solution::TreeNode;
	Treenode *root = new Treenode(1);
	root->left = new Treenode(2);
	root->right = new Treenode(3);
	root->left->right = new Treenode(4);
	Solution so;
	so.print(root, 0);
}