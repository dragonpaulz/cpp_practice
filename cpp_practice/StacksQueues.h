void stackPractice();
void stackChap1();
void stackChap2();
void stackChap3();
void stackChap4();
void stackChap5();
void stackChap6();
void stackChap7();

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

/******************************************************************************
* class Stack
*
*	A class to perform a 'Last in, first out' (LIFO) data structure.
******************************************************************************/

template<class T>
class Stack
{
public:
	Node<T>* top = nullptr;

	T pop()
	{
		if (top == nullptr)
		{
			int retValue = top->value;
			Node *oldTop = top;
			top = top->next;
			delete oldTop;
			return retValue;
		}
		return NULL;
	}

	void push(int pushValue)
	{
		Node *newTop = new Node(pushValue);
		newTop->next = top;
		top = newTop;
	}

	T const peek()
	{
		return top->value;
	}

	Stack()
	{

	}
};


/******************************************************************************
* class Queue
* 
*	A class to perform a 'First in, first out' (FIFO) data structure.
******************************************************************************/
template <class T>
class Queue
{
private:
	Node *top = nullptr;

public:
	void enqueue(T addObject)
	{
		Node *newTop = new Node(T);
		newTop->next = top;
		top = newTop; 
	}

	T dequeue()
	{
		if (top != nullptr){
			Node *oldTop = top;
			T returnValue = top->value;
			top = top->next;
			delete oldTop;
			return returnValue;
		}
		return NULL;
	}
};