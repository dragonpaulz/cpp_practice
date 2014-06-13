#include "stdafx.h"

// cpp_practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.cpp"

problemSet problem = tree;

void unorderedMapPractice()
{
	std::pair<int, std::string> paulPair(2, "Karolina");


	std::unordered_map<int, std::string> paulMap;
	paulMap.insert(std::make_pair(1, "Paul"));
	paulMap.insert(std::make_pair(3, "Paulie"));
	paulMap.insert(paulPair);
	std::string temp2 = paulMap[1];
	std::string temp = paulMap[2];
	std::cout << paulMap[2] << std::endl;
	std::cout << paulMap[1] << std::endl;
	std::cout << paulMap[1] << std::endl;
	std::unordered_map<int, std::string>::iterator mapItr;

	mapItr = paulMap.begin();
	std::cout << mapItr._Ptr << std::endl;
	mapItr++;
	std::cout << mapItr._Ptr << std::endl;
}

int main(int argc, char* argv[])
{
	switch(problem)
	{
	case(linkedlist):
		linkedListPractice();
		break;

	case(array1) :
		informUser(arrayChap1Better("tt"));
		break;

	case(array2):
		reverse("Paul");
		break;

	case(array3) :
		informUser(arrayChap3("cat", "tca"));
		break;

	case(linkedlist1):
		std::list<int> linkedlistChap1(std::list<int> original_list);
		break;

	case(tree) :
		// next line causing problems:
		//BinaryTree<int>::treePractice();
		break;

	default:
		unorderedMapPractice();
	}

	//unorderedMapPractice();


	return 0;
}

void informUser(bool result)
{
	if (result)
	{
		std::cout << "The result is true" << std::endl;
	}
	else
	{
		std::cout << "The result is false" << std::endl;
	}
}
