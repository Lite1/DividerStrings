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
	vector <string> subStrings = Tools().divisionStrAtSubStr(str, n);
	for (int i = 0; i < subStrings.size(); i++) {
		cout << subStrings[i];
	}
	//Tools().divisionStrAtSubStr(str, n);
	
}