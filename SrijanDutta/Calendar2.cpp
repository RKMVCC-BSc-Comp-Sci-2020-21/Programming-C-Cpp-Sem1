#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    int l=1, u, c=1;
    cout << "Enter the number of days of the month:";
    cin >> u;
    string day[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    for(int i=0;i<7;i++)
        cout << setw(5) <<day[i];
    cout << "" << endl;
    for(int i=l;i<=u;i++){
            cout << setw(5) << i;
            c++;
            if(c>7){
                cout << endl;
                c=1;
            }
    }
}