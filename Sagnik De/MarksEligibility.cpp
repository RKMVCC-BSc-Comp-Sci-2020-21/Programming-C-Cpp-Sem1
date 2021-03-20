/*WAP to find the eligibility of admission for a professional course based on the following criteria.

Eligibility Criteria :
(Marks in Maths >=65) AND (Marks in Phy >=55) AND (Marks in Chem>=50) AND (Total in all three subject >=190) OR (Total in Maths and Physics >=140)

Sample Input:

Marks obtained in Physics :65
Marks obtained in Chemistry :51
Marks obtained in Mathematics :72
Total marks of Maths, Physics and Chemistry : 188
Total marks of Maths and Physics : 137

Output:

The candidate is not eligible.

*/

#include <iostream>
using namespace std;

int main()
{
    int M, P, C;

    cout<<"Enter the Maths marks : ";
    cin>>M;
    cout<<"Enter the Physics marks : ";
    cin>>P;
    cout<<"Enter the Chemistry marks : ";
    cin>>C;

    if(((M>=65)&&(P>=55)&&(C>=50)&&((M+P+C)>=190))||((M+P)>=140))
        cout<<"\n\tThe candidate is eligible.\n\n";
    else
        cout<<"\n\tThe candidate is not eligible.\n\n";

    return 0;
}
