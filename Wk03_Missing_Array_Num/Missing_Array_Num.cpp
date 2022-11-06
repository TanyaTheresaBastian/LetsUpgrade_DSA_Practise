// Given an array a[ ] of size ***‘n-1’*** with integers in the range of ***[1,n].*** There are no duplicates in the list.

// Write a program to find the missing number from the first ***n*** integers.

// Consider example n=5;  a[ ]= { 2, 5, 1, 3}; 

// n=5 means Range[1,5]. Output should be the missing number between 1 to 5. So 4 is the output as per the given array. 

// **Note:** Find the missing number in O(n) time and constant space.

// ## Test case →

// 1.  a[ ] = { 3, 6, 1, 5, 4} , n=6
// 2.  a[ ] = { 8, 3, 2, 1, 5, 4, 7} , n=8
// 3.  a[ ] = { 3, 2, 4, 5} , n=5

// ## Answer →


#include <iostream>
using namespace std;

int main(){
       int N;
       long int sum =0, total;
       cout<<"Enter Range: ";
       cin>>N;
       int arr[N-1];
       total = (N*(N+1))/2;
       for(int i =0; i<N-1;i++){
            cout<<"Enter Array Element :";
            cin>>arr[i];
            sum = sum + arr[i];
       }
       int missNum = total-sum;
       cout<<"\nMissing Number = "<<missNum<<endl;
       return 0;
}
