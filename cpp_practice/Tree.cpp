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
	return treeChap1Helper(checkThisTree->root);
}


bool treeChap1Helper(TreeNode *subTree)
{
	if (subTree == nullptr) return true;
	if (abs(getHeight(subTree->left) - getHeight(subTree->right)) > 1) return false;
	return treeChap1Helper(subTree->left) && treeChap1Helper(subTree->right);
}


int getHeight(TreeNode * subTree)
{
	if (subTree == nullptr) return 0;
	return (std::max(getHeight(subTree->left), getHeight(subTree->right))) + 1;
}