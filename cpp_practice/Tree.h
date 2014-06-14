// Trees can be used with the 'map' data structure from C++'s standard library,
// however this is an implementation of a tree. This is merely an exercise in
// practice programming, and it should not be used as an alternative to map.






template<typename Object>
class TreeNode{
protected:
	Object value;
	TreeNode *left = nullptr;
	TreeNode *right = nullptr;

	template<typename Object>
	friend class BinaryTree;

	TreeNode(Object v)
	{
		value = v;
	}
public:
	Object getValue()
	{
		return value;
	}

	TreeNode* getLeft()
	{
		return left;
	}

	TreeNode* getRight()
	{
		return right;
	}

};



void treeChap1();
void treeChap2();
void treeChap3();
void treeChap4();
void treeChap5();
void treeChap6();
void treeChap7();
void treeChap8();
void treeChap9();

/* ****************************************************************************
* class BinaryTree
*
*	A class to make a binary search tree.
* ****************************************************************************/

template<typename Object>
class BinaryTree
{
private:
	TreeNode<Object> *root = nullptr;


	// rebalancing function
	void balanceTree();
public:
	void addValue(Object v)
	{
		if (root == nullptr)
		{
			root = new TreeNode<Object>(v);
			return;
		}
		TreeNode<Object> *currentNode = root;
		if (currentNode->value <= v)
		{

		}
	}

	std::list<Object> BFSList()
	{
		std::list<Object> * nodesInOrder = new std::list<Object>;
		if (root != nullptr)
		{
			std::list<Object>*::iterator nodesInOrderItr = nodesInOrder.begin();
			nodesInOrder.push_back(*root);
			while (nodesInOrderItr != nodesInOrder.end())
			{
				if (nodesInOrder->left != nullptr)
					nodesInOrder.push_back(nodesInOrder->left);
				if (nodesInOrder->right != nullptr)
					nodesInOrder.push_back(nodesInOrder->right);
			}
		}
		return nodesInOrder;
	}

	static void treePractice();
};