//Write a Program to check a given number representation is in binary or not?

//User input will contain a single integer n. 0≤n≤30,000

//Test case →

//1.  10101
//2.  112
//3.  29811

#include <iostream>

using namespace std;

int main()

 {  

   string s; 

   bool isBinary =1;

   cout<<"Enter number to check: "; 

   cin>>s;  

   for(int i=0;i<s.length();i++)

   {   

      if(s.at(i) != '0' && s.at(i) != '1') {      
           isBinary = 0;   

         }   

    }

if (isBinary) {
    cout <<s<<" is a Binary Number." << endl;
}

 else {
    cout <<s<<" is Not a Binary number." << endl;
}
return 0;
}
