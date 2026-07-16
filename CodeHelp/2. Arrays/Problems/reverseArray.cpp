#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> &arr);

int main() {

    vector<int> arr = {48, 217, 146, 61, 91, 47, 44, 83};
    PrintArray(arr);

    int left =0 , right= arr.size() -1 ;

    while (left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    PrintArray(arr);


    // Write your code here
    return 0;
}

void PrintArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}