#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    std::cout<< "Enter dividend: ";
	std::cin >> dividend;

    std::cout << "Enter divisor: ";
    std::cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
