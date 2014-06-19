#include "stdafx.h"

#ifndef CPP_PRACTICE_LINKEDLIST_H
#define CPP_PRACTICE_LINKEDLIST_H
#include "LinkedList.h"
#endif

void linkedListPractice()
{
	std::list<int> paulList;
	paulList.push_back(4);
	paulList.push_back(5);
	std::list<int>::iterator paulItr = paulList.begin();
	std::cout << *paulItr << std::endl;
	paulItr++;
	std::cout << *paulItr << std::endl;
	paulItr++;
	if(paulItr == paulList.end())
		std::cout << "True" << std::endl;
	return;
}

/* ****************************************************************************
/ Removes duplicates from the linkedlist.
/ This does not change the linkedlist, which would be a different algorithm
/ If one were to change the linkedlist so that there are no duplicates, then
/ the function would change the pointers so that the duplicate items are
/ skipped over.
/ ****************************************************************************/
std::list<char>* linkedlistChap1(std::list<char> inputLinkedList)
{

	// char chosen because we can assume it has a certain number of possible 
	// values.
	const unsigned int MAXVALUES = 256;
	std::vector<bool> seenValues(MAXVALUES, false);

	std::list<char>::iterator checkValueItr;

	std::list<char> *returnList = new std::list<char>();

	checkValueItr = inputLinkedList.begin();
	while (checkValueItr != inputLinkedList.end())
	{
		// value has not been seen before
		if (!seenValues.at(*checkValueItr))
		{
			returnList->push_back(*checkValueItr);
			seenValues.at(*checkValueItr) = true;
		}
	}

	return returnList;
}

/* ****************************************************************************
* Follow-up, if there's one were to do linkedlistChap1 without any extra data
* structures, then the function would change the pointers to skip the duplicate
* items.
* ****************************************************************************/

int linkedlistChap2(std::list<int> inputList, int k) {
	if(inputList.begin() == inputList.end())
	{
		return 0;
	}
	int length = 1;// we can be certain the list is at least 1 element
	std::list<int>::iterator counter;
	counter = inputList.begin();
	while(++counter != inputList.end())
	{
		length++;
		counter++;
	}
	counter = inputList.begin();
	for(int i = 0; i < length - k; i++)
	{
		counter++;
	}
	return *counter;// When returning a value with iterator, return the pointer
}

int betterLinkedlistChap2(std::list<int> inputList, int k)
{
	std::list<int>::iterator ahead;
	std::list<int>::iterator behind;
	ahead = inputList.begin();
	for(int i = 0; i < k; i++)
	{
		ahead++;
	}
	behind = inputList.begin();
	while(ahead != inputList.end())
	{
		ahead++;
		behind++;
	}
	return *behind;//don't forget to put the reference to the element
}

void linkedlistChap3(std::list<int> *wholeList, std::list<int>::iterator middle)
{
	std::list<int>::iterator checkItr;
	checkItr = wholeList->begin();

	while (checkItr != wholeList->cend() )
	{
		if (checkItr == middle)
		{
			wholeList->erase(checkItr);
			return;
		}
		checkItr++;
	}
}

/* ****************************************************************************
* static void std::list<Object>::printList()
*
*	output:
*		prints to the screen the contents of a list
* ****************************************************************************/

template<typename Object>
static void printList(std::list<Object> listToPrint)
{
	std::list<Object>::iterator throughList = listToPrint.cbegin();
	while (throughList != listToPrint.cend())
	{
		std::cout << *throughList << " ";
		throughList++;
	}
	std::cout << std::endl;
}