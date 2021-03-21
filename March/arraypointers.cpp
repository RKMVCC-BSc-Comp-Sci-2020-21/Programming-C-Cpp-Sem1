#include <iostream>
using namespace std;
int main() {
	int *ip;
	int arr[] = { 10, 34, 13, 76, 5, 46 };
	ip = arr;
	for (int x = 0; x < 6; x++) {
		cout << *ip << endl;
		ip++;
	}
	return 0;
}
