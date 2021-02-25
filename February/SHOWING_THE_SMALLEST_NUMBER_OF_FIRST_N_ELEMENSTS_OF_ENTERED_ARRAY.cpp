#include <iostream>

using namespace std;

void minValue(int n,int arr[100]){

    for(int i=n;i>0;i--){

        for(int j=0;j<i-1;j++){

            if(arr[j]>arr[j+1]){

                int temp= arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=temp;
            }
        }
    }

    cout<<"The minimum value among the first "<<n<<" elements of given array : \n"
         <<arr[0]<<endl;

}

int main(){

    int arr[100];

    int s = 0,n = 0;

    cout<<"Enter the number elements of the array : ";

    cin>>s;

    for(int i=0;i<s;i++){

        cout<<"Enter element no. "<<i+1<<endl;

        cin>>arr[i];

    }
    cout<<"Enter the value of n : ";

    cin>>n;

    minValue(n,arr);

    return 0;

}
