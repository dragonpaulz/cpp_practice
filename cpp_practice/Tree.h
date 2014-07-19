// Trees can be used with the 'map' data structure from C++'s standard library,
// however this is an implementation of a tree. This is merely an exercise in
// practice programming, and it should not be used as an alternative to map.

enum colour{ red, black };




template<typename Object>
class TreeNode{
protected:
	Object value;
	TreeNode *left = nullptr;
	TreeNode *right = nullptr;

	// declare friend classes
	template<typename Object>
	friend class BinaryTree;
	friend class RBTreeNode;
	friend class RBBinaryTree;

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

/* ****************************************************************************
* class RBTreeNode
*
*	Nodes that make up a red-black tree.
* ****************************************************************************/
template<typename Object>
class RBTreeNode<Object> : protected TreeNode<Object>
{
protected:
	colour nodeColour;

	RBTreeNode(Object v, colour startColour)
	{
		nodeColour = startColour;
		TreeNode(v);
	}
};


/* ****************************************************************************
* class BinaryTree
*
*	My own implementation of the Binary Search Tree.
* ****************************************************************************/

template<typename Object>
class BinaryTree
{
private:
	TreeNode<Object> *root = nullptr;


	// rebalancing function
	void balanceTree()
	{

	}

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

	/* ************************************************************************
	* std::list<Object> BFSList()
	* 
	*	returns:
	*		a linked list containing the contents of a tree in the Breadth
	*		first search order.
	* ************************************************************************/
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

// To write: RBBinaryTree

// declare functions to do in the book
template<typename Object>
bool treeChap1(RBBinaryTree<Object>);
void treeChap2();
void treeChap3();
void treeChap4();
void treeChap5();
void treeChap6();
void treeChap7();
void treeChap8();
void treeChap9();