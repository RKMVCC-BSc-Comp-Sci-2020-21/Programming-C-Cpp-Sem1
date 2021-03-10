#include<bits/stdc++.h>
using namespace std;
//Function to convert vowels
//into uppercase
string conVowUpp(string& str)
{
	//Stores the length
	//of str
	int N = str.length();
	for (int i =0; i<N; i++)
	  if(str[i]=='a'|| str[i]=='e'
	  || str[i]=='i'||str[i]=='o'
	  || str[i]=='u')
	  {
	  	str[i]=str[i]-'a'+'A';
	  }
	return str;
	
}
//Driver code
int main()
{
	string str = "eutopia";
	cout<< conVowUpp(str);
}
