#include <iostream>

using namespace std;

void compareArray(int sizeFirst,int sizeSecond,int firstArray[10],int secondArray[10], int noCE){

    cout<<"the common elements are :";

    for(int i=1;i<=sizeFirst;++i){

        for(int j=1;j<=sizeSecond;++j){

            if(firstArray[i]==secondArray[j]){

                noCE = noCE+1;

                cout<<firstArray[i]<<",";

            }

    }

}

     cout<<endl<<"Number of common elements is :"<<noCE<<endl;
}

int main(){

    int sizeFirst = 0;

    int sizeSecond = 0;

    int firstArray[10];

    int secondArray[10];

    int noCE = 0;

    cout<<"Enter the size of the first array :";

    cin>>sizeFirst;

    for(int i=1;i<=sizeFirst;++i){

        cout<<"Enter element "<<i<<" :"<<endl;

        cin>>firstArray[i];

    }
    cout<<"Enter the size of the second array :";

    cin>>sizeSecond;

    for(int i=1;i<=sizeSecond;++i){

        cout<<"Enter element "<<i<<" :"<<endl;

        cin>>secondArray[i];

    }
    compareArray(sizeFirst,sizeSecond,firstArray,secondArray,noCE);

      return 0;
}
