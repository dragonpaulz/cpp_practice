/* ****************************************************************************
* class Graph<typename, bool>
*
*	A class which represents graphs as either directed or undirected
*	adjacency-matrix. The adjacency-matrix representation is explained in
*	section 22.1 from "Introduction to Algorithms: Second Edition" by Cormen,
*	Leiserson, Rivest, and Stein.
*
*	template:
*		typename: type of value kept in the key
*		bool: set true if graph is directed, false if undirected
* ****************************************************************************/

template<typename Object, bool directed>
class Graph
{
	std::vector<std::vector<Object>> connections;
public:
	Graph(unsigned int nNodes)
	{

		connections = new std::vector<std::vector<Object>>
			(nNodes, std::vector<Object>(nNodes));
		for (int i = 0; i < nNodes; i++)
		{
			connections[i] = new std::vector<Object>(nNodes);
			connections[i] = { false };
		}
	}

	Graph()
	{
		Graph(1);
	}

	void addConnection(unsigned int fromNode, unsigned int toNode)
	{
		connections[fromNode][toNode] = true;
		if (!directed)
		{
			connections[toNode][fromNode];
		}
	}

	void removeConnection(unsigned int fromNode, unsigned int toNode)
	{
		connections[fromNode][toNode] = false;
		if (!directed)
		{
			connections[toNode][fromNode] = false;
		}
	}

	void printAdjacencyMatrix()
	{
		for (int i = 0; i < connections->size(); i++)
		{
			for (int j = 0; j < connections->size(); j++)
			{
				if (*connections[j][i])
					std::cout << "1 ";
				else
					std::cout << "0 ";
			}
			std::endl;
		}
	}
};