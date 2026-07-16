#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>

using namespace std;
int main() {
    // Write your code here
    string str = "Hi bro";
    cout<<"Before "<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<"After :"<<str<<endl;


    
    return 0;
}