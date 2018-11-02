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
	 if (s.length() < n)
	 {
		 throw invalid_argument("The number of divisions exceeds the number of characters");
	 }

	 int subStrLength = (int)ceil((double)s.length() / n);

	 if (s.length() <= subStrLength * (n - 1)) 
	 {
		 throw exception("Cannot split line correctly");
	 }

	 vector <string> subStrings;

	 for (int i = 0; i < n; i++)
	 {
		 if (i != n - 1) {
			 subStrings.push_back(s.substr(subStrLength * i, subStrLength));
		 }
		 else {
			 subStrings.push_back(s.substr(subStrLength * i));
		 }
	 }

	 return subStrings;
}

void Tools::printSubStrings(vector<string> subStrings)
{
	for (int i = 0; i < subStrings.size(); i++)
	{
		cout << "[" << i + 1 << "/" << subStrings.size() << "] " << subStrings[i] << "\n";
	}
}