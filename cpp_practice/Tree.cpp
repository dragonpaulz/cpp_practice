#include "stdafx.h"

#include "Tree.h"

// std::map used to answer these questions as it is an implementation of 
// red-black trees.

// std::set is an implementation of red-black trees in the standard library
// std::map as well
// The difference is that std::set is used where the key and value are the same
// std::map has a separate key and value. THey can be of different types.

/*template<typename Object>
static void BinaryTree<Object>::treePractice()
{
	std::map<std::string, int> studentMarks;

	studentMarks.insert(std::make_pair("Paul", 87));
	studentMarks.insert(std::make_pair("Karolina", 94));
	studentMarks.insert(std::make_pair("Doug", 85));

	std::cout << studentMarks.at("Paul") << std::endl;
}*/


bool treeChap1(BinaryTree *checkThisTree)
{
	if (checkThisTree->root == nullptr) return true;
	return isBalanced(checkThisTree->root);
}


bool isBalanced(TreeNode *subTree)
{
	if (checkHeight(subTree) == -1)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int checkHeight(TreeNode * subTree)
{
	if (subTree == nullptr) return 0;
	
	int leftHeight = checkHeight(subTree->left);
	if (leftHeight == -1)
	{
		return -1;
	}

	int rightHeight = checkHeight(subTree->right);
	if (rightHeight == -1)
	{
		return -1;
	}

	int heightDiff = leftHeight - rightHeight;
	if (std::abs(heightDiff) > 1)
	{
		return -1;
	}
	else
	{
		return std::max(leftHeight, rightHeight) + 1;
	}
}