#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char maxOccuringChars(string s){
    vector<int> arr(26,0);

    for(int i=0; i<s.size(); i++){
        int number = 0;
        if(s[i]>='a' && s[i]<='z'){
            number = s[i] - 'a';
            arr[number]++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            number = s[i] - 'A';
            arr[number]++;
        }
    }
    auto it = max_element(arr.begin(), arr.end());
    int index = it - arr.begin();

    return 'a' + index;
}


int main() {

    // Write your code here

    cout<<maxOccuringChars("samarth");

    return 0;
}