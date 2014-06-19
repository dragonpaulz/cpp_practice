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
	std::vector< Object > nodeValues;
public:
	Graph(unsigned int nNodes)
	{
		connections.resize(nNodes);
		nodeValues.resize(nNodes);
		for (unsigned int i = 0; i < nNodes; i++)
		{
			connections.at(i).resize(nNodes);

			for (unsigned int j = 0; j < nNodes; j++)
			{
				connections.at(i).at(j) =false;
			}
		}
	}

	Graph()
	{
		Graph(1);
	}

	void setNodeValue(unsigned int nodeNum, Object value)
	{
		nodeValues.at(nodeNum) = value;
	}

	void addConnection(unsigned int fromNode, unsigned int toNode)
	{
		try
		{
			changeConnections(true, fromNode, toNode);
		}
		catch (const std::out_of_range& e)
		{
			printErrorMsg(e, fromNode, toNode);
		}
	}

	void removeConnection(unsigned int fromNode, unsigned int toNode)
	{
		try
		{
			changeConnections(false, fromNode, toNode);
		}
		catch (const std::out_of_range& e)
		{
			printErrorMsg(e, fromNode, toNode);
		}
	}

	void changeConnections(bool finalState, int fromNode, int toNode)
	{
		connections.at(fromNode).at(toNode) = finalState;
		if (!directed)
		{
			connections.at(toNode).at(fromNode) = finalState;
		}
	}

	void printAdjacencyMatrix()
	{
		for (unsigned int i = 0; i < connections.size(); i++)
		{
			for (unsigned int j = 0; j < connections.size(); j++)
			{
				if (connections.at(i).at(j) )
					std::cout << "1 ";
				else
					std::cout << "0 ";
			}
			std::cout << std::endl;
		}
	}

	void printErrorMsg(const std::out_of_range& e, int fromNode, int toNode)
	{
		std::cout << "Out of bounds error. Item " << fromNode << " or " <<
			toNode << " in " << e.what() << " does not exist." <<
			std::endl;
	}
};