#include "pch.h"
#include <iostream>
#include "Tools.h"
int main()
{
    cout << "Input string\n";
	string str;
	cin >> str;

	cout << "Input N\n";
	int n;
	cin >> n;
	Tools().printSubStrings(Tools().divisionStrAtSubStr(str, n));
	//Tools().divisionStrAtSubStr(str, n);
	
}