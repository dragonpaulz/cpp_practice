// Trees can be used with the 'map' data structure from C++'s standard library,
// however this is an implementation of a tree. This is merely an exercise in
// practice programming, and it should not be used as an alternative to map.






template<typename KeyObject, typename ValueObject>
class TreeNode{
protected:
	KeyObject key;
	ValueObject value;
	TreeNode *left = nullptr;
	TreeNode *right = nullptr;

	friend class BinaryTree;

	TreeNode(KeyObject k, ValueObject v)
	{
		
		key = k;
		value = v;
	}
public:
	ValueObject getValue()
	{
		return value;
	}

};

class paulTree{
public:

	static void paulTree::treePractice();
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

/*
template<typename KeyObject, typename ValueObject>
class BinaryTree
{
private:
	TreeNode<KeyObject, ValueObject> *root = nullptr;


	// rebalancing function
	void balanceTree();
public:
	void addValue(KeyObject k, ValueObject v)
	{
		if (root == nullptr)
		{
			root = new TreeNode<KeyObject, ValueObject>(v);
			return;
		}
		TreeNode<KeyObject, ValueObject> *currentNode = root;
		if (currentNode->key <= k)
		{

		}
	}
};*/