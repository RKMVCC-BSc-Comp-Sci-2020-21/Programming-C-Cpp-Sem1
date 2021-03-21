#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str;
    cout<<"Enter the string to be sorted: ";
    getline(cin,str);
    int len = str.length();
    cout<<"\n String before sorting: "<<str<<" \n";

    //using bubble sort to sort the characters
    for (int i = 0; i < len; i++)
	{
        for (int j = i+1; j < len; j++)
	    {
            if (str[i] > str[j]) //if previous has bigger ascii value than next,
	    {
		//swapping the prev and next characters
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout<<"\n String after sorting: "<<str<<" \n";
    return 0;
}
