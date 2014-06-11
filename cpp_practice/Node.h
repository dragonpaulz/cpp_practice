// Nodes contain the information for all the different datastructures that I'll
// use, such as the elements in linked lists, or the elements in Stacks and
// Queues.

template<class T>
class Node
{
public:
	T value;

	Node *next = nullptr;

	Node()
	{
		value = 0;
	}

	Node(T val)
	{
		value = val;
	}
};