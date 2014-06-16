/* ****************************************************************************
* class Graph<typename, bool>
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
	Graph(unsigned int);
	addConnection(unsigned int fromNode, unsigned int toNode);
	removeConnection(unsigned int fromNode, unsigned int toNode);
};