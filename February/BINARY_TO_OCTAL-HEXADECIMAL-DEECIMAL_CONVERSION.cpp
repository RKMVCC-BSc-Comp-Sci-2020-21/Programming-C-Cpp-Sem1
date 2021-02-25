
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void dec2Oc(int rd1,int oc,int i,int dec){

    while(dec > 0){
        rd1 = dec%8;
        oc = oc + rd1*(pow(10,i));
        dec = dec/8;
        i = i+1;
     }
     cout<<" The octal value of the given number : "<<oc<<endl;
}


void dec2Hex(int i,int dec, int hex[]){
    while (dec != 0) {

     hex[i] = dec % 16;
     dec = dec / 16;
     i++;

    }

    cout<<" The hexadecimal value of the given number : ";
    for ( int j = 0; j<=i-1; j++){
     if (hex[j] > 9)  {
      cout<<(char)(hex[j] + 55);
     }else{
      cout<<hex[j];
     }
    }cout<<endl;
}


int main(){

    int bi = 0;
    int rd = 0;
    int rd1 = 0;
    int oc = 0;
    int hex[100];
    int dec = 0;
    int i = 0;
    char in[1];

    cout<<"Enter a number in binary :";
    cin>>bi;

    while(bi > 0){
       rd = bi%10;
       dec = dec + rd*(pow(2,i));
       bi = bi/10;
       i = i+1;
    }

    i = 0;


    cout<<"Convert the given number in (o/h/d)(o-OCTAL,h-HEXADECIMAL,d-DECIMAL) : ";
    cin>>in[1];

    if(in[1]=='d'){
        cout<<" decimal value of the given number : "<<dec<<endl;

    }else if(in[1]=='o'){
        dec2Oc(rd1,oc, i, dec);

    }else{
        dec2Hex(i,dec, hex);
    }


    return main();
}

