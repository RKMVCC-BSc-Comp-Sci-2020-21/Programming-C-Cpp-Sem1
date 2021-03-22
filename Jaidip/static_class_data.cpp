// C++ program to illustrate the 
// above concepts 
#include<iostream> 
#include <map> 

// Driver Code 
int main() 
{ 
	// Map 
	std::map<int, char> M = { { 1, 'a' }, 
							{ 2, 'b' } }; 

	// Check if M has key 2 
	if (M.contains(2)) { 
		std::cout << "Found\n"; 
	} 
	else { 
		std::cout << "Not found\n"; 
	} 
	return 0; 
} 
