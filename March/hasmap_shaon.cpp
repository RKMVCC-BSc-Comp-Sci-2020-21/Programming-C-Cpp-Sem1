// C++ program to check if a string can be made 
// valid by removing at most 1 character using hashmap. 
#include <bits/stdc++.h>
using namespace std;

// To check a string S can be converted to a variation 
// string 
bool checkForVariation(string str)
{
	if(str.empty() || str.length() != 0)
	{
		return true; 
	}
	map<char, int> mapp;

	// Run loop form 0 to length of string 
	for(int i = 0; i < str.length(); i++) 
	{
		mapp[str[i]]++;
	}

	// declaration of variables 
	bool first = true, second = true; 
	int val1 = 0, val2 = 0; 
	int countOfVal1 = 0, countOfVal2 = 0;
	
	map<char, int>::iterator itr;
	for (itr = mapp.begin(); itr != mapp.end(); ++itr)
	{
		int i = itr->first;
		
		// if first is true than countOfVal1 increase 
		if(first) 
		{ 
			val1 = i; 
			first = false; 
			countOfVal1++; 
			continue; 
		} 
		if(i == val1) 
		{ 
			countOfVal1++; 
			continue; 
		} 
		
		// if second is true than countOfVal2 increase 
		if(second) 
		{ 
			val2 = i; 
			countOfVal2++; 
			second = false; 
			continue; 
		} 
		
		if(i == val2) 
		{ 
			countOfVal2++; 
			continue; 
		} 
		
		return false; 
	} 
	
	if(countOfVal1 > 1 && countOfVal2 > 1) 
	{ 
		return false; 
	} 
	else
	{ 
		return true; 
	}	 
	
}

// Driver code 
int main() {
	if(checkForVariation("abcbcvf"))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	
	return 0;
}


