#include<iostream>
using namespace std;
template<class T>	//'T' IS THE NAME OF THE TEMPLATE

class Vector{
	T *array;		//THE DATA TYPE OF THE ARRAY IS 'T'
	int size;
	T sum;			//THE DATA TYPE OF THE SUM ATRIBUTE IS ALSO 'T'
	public:
		vector(int s)	//PARAMETERIZED CONSTUCTOR OF VECTOR CLASS
		{
			size=s;
			array =new T[size];
			//THE NEW ARRAY OF 'T' DATA TYPE IS CREATED WITH USER SPECIFIED SIZE
			
			int i;
			
			for(i=0;i<size;i++)
				array[i]=0;
				//INITIALIZING THE ARRAY WITH 0
		}
		
		void input()
		{
			int i;
			
			for(i=0;i<size;i++)
			{
				cout<<"\n\tEnter number into index "<<i<<" : ";
				cin>>array[i];
			}
		}
		void add()
		{
			int i;
			sum =0;
			for(i=0;i<size;i++)
				sum=sum+array[i];
		}
		void output()
		{
		
			cout<<"\n\tThe sum of these number is : "<<sum;
		}
	
};

int main()
{
	Vector <int> obj_int(3);
	Vector <float> obj_float(3);
	
	cout<<"\n\tINTEGER ARRAY : ";
	obj_int.input();
	obj_int.add();
	obj_int.output();
	
	cout<<"\n\tFLOAT ARRAY : ";
	obj_float.input();
	obj_float.add();
	obj_float.output();
	
	return 0;
	
}


