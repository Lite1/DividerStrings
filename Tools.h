#include <string>  
#include <vector>
using namespace std;
#pragma once
class Tools
{
public:
	Tools();
	~Tools();
	
	static vector<string> divisionStrAtSubStr(string s, int n);
	
	static int getNumLength(int num);
};