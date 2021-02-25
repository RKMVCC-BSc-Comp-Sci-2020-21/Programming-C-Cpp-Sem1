#include <iostream>
#include <cstring>

using namespace std;

int main(){

   char word[10];

   cout<<"Enter a word : ";

   cin>>word;

   for(int i=0;i<=strlen(word);++i){

       if(word[i]=='a' || word[i]=='e' ||
           word[i]=='i' || word[i]=='o' ||
           word[i]=='u' ){

            word[i]=word[i]-32;
         }
      }
    cout<<"The entered word in uppercase vowels: "<<word <<"\n";

           return 0;
}
