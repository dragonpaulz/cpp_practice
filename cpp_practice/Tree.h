// Trees can be used with the 'map' data structure from C++'s standard library,
// however this is an implementation of a tree. This is merely an exercise in
// practice programming, and it should not be used as an alternative to map.

enum colour{ red, black };




class TreeNode
{
protected:
	int value;

	// declare friend classes

	friend class BinaryTree;
	friend class RBTreeNode;
	friend class RBBinaryTree;

public:
	TreeNode *left;
	TreeNode *right;

	template<typename Object>
	TreeNode(Object v)
	{
		value = v;
		left = nullptr;
		right = nullptr;
	}

	TreeNode()
	{
		value = NULL;
		left = nullptr;
		right = nullptr;
	}

	int getValue()
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
/*template <typename Object> // error C3857?
class RBTreeNode<Object>
{
protected:
	colour nodeColour;

	RBTreeNode(Object2 v, colour startColour)
	{
		nodeColour = startColour;
		TreeNode(v);
	}
};*/


/* ****************************************************************************
* class BinaryTree
*
*	My own implementation of the Binary Search Tree.
* ****************************************************************************/


class BinaryTree
{
private:

	// rebalancing function
	void balanceTree()
	{

	}

public:
	TreeNode *root = nullptr;
	void addValue(int v)
	{
		if (root == nullptr)
		{
			root = new TreeNode(v);
			return;
		}
		
		TreeNode *currentNode = root;

		// put a new tree node in the tree.
		while (currentNode != nullptr)
		{
			if (currentNode->value <= v)
			{
				if (currentNode->left == nullptr)
				{
					currentNode->left = new TreeNode(v);
					break;
				}
				currentNode = currentNode->left;
			}
			else
			{
				if (currentNode->right == nullptr)
				{
					currentNode->right = new TreeNode(v);
					break;
				}
				currentNode = currentNode->right;
			}
		}
	}

	/* ************************************************************************
	* std::list<Object> BFSList()
	* 
	*	returns:
	*		a linked list containing the contents of a tree in the Breadth
	*		first search order.
	* ************************************************************************/
	/*std::list<int>* BFSList()
	{
		std::list<int> * nodesInOrder = new std::list<int>;
		if (root != nullptr)
		{
			std::list<int>::iterator nodesInOrderItr = nodesInOrder->begin();
			nodesInOrder->push_back(*root);
			while (nodesInOrderItr != nodesInOrder.end())
			{
				if (nodesInOrder->left != nullptr)
					nodesInOrder.push_back(nodesInOrder->left);
				if (nodesInOrder->right != nullptr)
					nodesInOrder.push_back(nodesInOrder->right);
			}
		}
		return nodesInOrder;
	}*/

	static void treePractice();
};

// To write: RBBinaryTree

// declare functions to do in the book
bool treeChap1(BinaryTree*);
bool treeChap1Helper(TreeNode*);
int getHeight(TreeNode *);

void treeChap2();
void treeChap3();
void treeChap4();
void treeChap5();
void treeChap6();
void treeChap7();
void treeChap8();
void treeChap9();