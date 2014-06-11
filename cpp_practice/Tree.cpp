#include "stdafx.h"

#include "Tree.h"

// std::map used to answer these questions as it is an implementation of 
// red-black trees.

void paulTree::treePractice()
{
	std::map<std::string, int> studentMarks;

	studentMarks.insert(std::make_pair("Paul", 87));
	studentMarks.insert(std::make_pair("Karolina", 94));
	studentMarks.insert(std::make_pair("Doug", 85));

	std::cout << studentMarks.at("Paul") << std::endl;
}