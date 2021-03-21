#include <iostream>  
using namespace std;  
int main()   
{  
    char char_array[] = {'J','A','V','A','T','P','O','I','N','T'};  
    int array_size = sizeof(char_array) /  
    sizeof(char);  
    string j = "";  
    int i;  
    for(i = 0; i < array_size; i++)  
   {  
    /** retrieving and merging the value of character array on position 'i'*/    
    j = j + char_array[i];  
    }  
    cout << j <<endl;  
}   
