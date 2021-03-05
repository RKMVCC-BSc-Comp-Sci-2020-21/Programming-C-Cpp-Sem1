
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>vect1;
    vector<int>vect2;
    vector<int>vect3;
    int count;
    int number;
    cout<<"ENTER THE LIMIT YOU WANT TO PUT IN THE ARRAY"<<endl;
    cin>>number;
    for(count=0;count<number;count++)
        vect1.push_back(count);
       cout<<vect1.max_size()<<endl;
    for(count=0;count<vect1.size();count++)
        cout<<vect1[count]<<"  ";
       cout<<endl;
    return 0;
}
