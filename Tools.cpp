#include "pch.h"
#include "Tools.h"
#include <string>  
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

Tools::Tools()
{

}


Tools::~Tools()
{

}


vector<string> Tools::divisionStrAtSubStr(string s, int n)
{
	vector <string> subStrings;
	int LENGTH_MIN_PREFIX = 6;

	if (LENGTH_MIN_PREFIX >= n) {
		throw invalid_argument("–азмер подстроки меньше или равен минимальному размеру строки");
	}

	int amountSubStrings = 1;
	int numSubString = 0;
	int residueString = s.length();

	while (true) {
		numSubString++;

		int lengthOfPrefix = 4 + getNumLength(numSubString) + getNumLength(amountSubStrings);

		if (lengthOfPrefix >= n) {
			throw overflow_error("Ќевозможно разложить строку");
		}

		int endIndexForSubstring;
		if (residueString <= n - lengthOfPrefix) {
			endIndexForSubstring = residueString;
			residueString = 0;
		}
		else {
			endIndexForSubstring = n - lengthOfPrefix;
			residueString -= endIndexForSubstring;
		}

		subStrings.push_back("[" + numSubString + '/' + amountSubStrings + '] ' + s.substr((numSubString - 1) *  (n - lengthOfPrefix), endIndexForSubstring) + "\n");


		if (residueString == 0) {
			break;
		}

		if (numSubString == amountSubStrings) {
			amountSubStrings++;
			numSubString = 0;
			residueString = s.length();
			subStrings.clear();
		}
	}
	return subStrings;
}

int Tools::getNumLength(int num)
{
	return (int)log10(num) + 1;
}