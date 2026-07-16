#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string replaceWithSubstring(string str, string substring){

    string result;
    for (char ch:str){
        if(ch == ' '){
            result += substring;
        }
        else{
            result += ch ;
        }
    }
    

    return result; 
}


int main() {
    // Write your code here
    
    string s = " Hello ";
    cout<<s<<endl;

    // s = replaceWithSubstring(s,"@40");
    // s.replace()
    cout<<s;;
    
    return 0;
}