//Write a Program to print Hollow Rhombus pattern of printing stars. 

//Input will contain the length of rhombus n.

//            * * * * *
//          *        *
//        *        *
//      *        *
//     * * * * *
//Test case →

//1.  Consider n=5
//2.  n=8
//3.  n=3

#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter Length of Rhombus: n= ";
cin>> n;
cout<<"\nHollow Rhombus: \n\n";
for (int i=0; i < n; i++)
{
for (int j=0; j < n - i; j++)
cout << " ";
for (int j=0; j < n; j++)
{
if (i == 0 || i == n-1 || j == 0 || j == n-1)
cout <<"* " ;
else
cout << "  " ;
}
cout << endl ;
}
return 0;
}
