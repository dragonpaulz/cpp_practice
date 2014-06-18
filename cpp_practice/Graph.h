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
	// vector is more safe than using bool **. 
	std::vector< std::vector< bool > > connections;
public:
	Graph(unsigned int nNodes)
	{
		connections.resize(nNodes);
		for (unsigned int i = 0; i < nNodes; i++)
		{
			connections[i].resize(nNodes);

			for (unsigned int j = 0; j < nNodes; j++)
			{
				connections[i][j] =false;
			}
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
		for (unsigned int i = 0; i < connections.size(); i++)
		{
			for (unsigned int j = 0; j < connections.size(); j++)
			{
				if (connections[i][j])
					std::cout << "1 ";
				else
					std::cout << "0 ";
			}
			std::cout << std::endl;
		}
	}
};