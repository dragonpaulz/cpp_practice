#include "stdafx.h"

#ifndef CPP_PRACTICE_ARRAY_H_
#define CPP_PRACTICE_ARRAY_H_
#include "array.h"
#endif

#ifndef CPP_PRACTICE_ARRAY_CPP_
#define CPP_PRACTICE_ARRAY_CPP_
#endif

void pointerPractice()
{
	int age = 30;
	int *paulAge;
	paulAge = &age;
	std::string name;
	std::cout << "Type your name" << std::endl;
	std::getline(std::cin, name);

	std::cout << "Hello, " << name << std::endl;
	std::cout << "You're " << *paulAge << " years old" << std::endl;
	
	return;
}

void arrayPractice()
{
	int *paulArray = new int[3];

}

// A method which returns true if there are repeating characters in the string
// and false if there are no repeating characters.

// Derp! I made this in O(n) space when O(1) space would suffice.
// If it's ASCII, then there can at most be 256 unique characters.
bool arrayChap1(std::string nonRepeating)
{
	std::unordered_map<char, bool> seenChar;
	std::unordered_map<char, bool>::iterator charLocation;
	for(unsigned int i = 0; i < nonRepeating.length(); i++)
	{
		//I need to remember to use the find function
		charLocation = seenChar.find(nonRepeating.at(i));
		if (charLocation !=  seenChar.end())
			return false;
		seenChar.insert(std::make_pair(nonRepeating.at(i), true));
	}
	return true;
}

bool arrayChap1Better(std::string nonRepeating)
{
	if(nonRepeating.length() > 256) 
		return false;
	// Assumes 256 unique characters. Each character has an equivalent int
	// value. Once a character is seen, set its character value to 0. 
	bool characters[256] = {false};

	for(unsigned int i = 0; i < nonRepeating.length(); i++)
	{
		if (characters[nonRepeating.at(i)])
			return false;
		characters[nonRepeating.at(i)] = true;
	}
	return true;
}

// reverse a C-style string
void reverse(char* str)
{
	char *end;
	end = str;
	while(*end != '/0')
	{
		end++;
	}
	char temp;
	end--;
	while(str > end)
	{
		temp = *str;
		*str = *end;
		*end = temp;
	}
	return;
}

// discover whether two strings are permutations of one another
// returns true if they are permutations.
bool arrayChap3(std::string s1, std::string s2)
{
	
	// sort the string
	std::sort(s1.begin(), s1.end());
	std::sort(s2.begin(), s2.end());

	// if the sorted strings are the same, then they are permutations.
	return s1 == s2;
}

void arrayChap4(std::string& inputString)
{
	std::queue<char> tempQueue;
	std::string::iterator tempChar = inputString.begin();

	for (int i = 0; i < inputString.size(); i++)
	{
		if (*tempChar == ' ')
		{
			tempQueue.push('%');
			tempQueue.push('2');
			tempQueue.push('0');
		}
		else
		{
			tempQueue.push(*tempChar);
		}
		
		*tempChar = tempQueue.front();
		
		tempQueue.pop();
		tempChar++;
	}

}