#include <iostream>
#include<array>
using namespace std;



int main() {
    // Write your code here
    array<int,5> arr = {12,34,67,43,89} ;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
    cout<< arr.at(2) << endl ;
    cout<< arr.empty() << endl ;
    
    cout<< arr.front() << endl ;
    cout<< arr.back() << endl ;
    return 0;
}