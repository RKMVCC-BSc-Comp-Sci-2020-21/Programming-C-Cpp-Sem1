
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char line[10];

    int vowels =0;

    int consonants =0;

    cout << "Enter a string: ";

    cin >>line;

    for(int i = 0; i < strlen(line); ++i){

            if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
               line[i]=='o' || line[i]=='u' || line[i]=='A' ||
               line[i]=='E' || line[i]=='I' || line[i]=='O' ||
               line[i]=='U'){

            ++vowels;

        }else if((line[i]>='a'&& line[i]<='z') ||
                 (line[i]>='A'&& line[i]<='Z')){

            ++consonants;

        }

    }

    cout << "Vowels: " << vowels << endl;

    cout << "Consonants: " << consonants << endl;


    return 0;
}

