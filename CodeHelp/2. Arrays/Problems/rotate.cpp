#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintArray(vector<int> &arr);
void rotateArray(vector<int> &arr, int k);

int main() {
    // Write your code here
    
    vector<int> arr = {1,2,3,4,5,6} ;
    PrintArray(arr);
    cout<<endl;

    rotateArray(arr,2);
    PrintArray(arr);
    cout<<endl;


    return 0;
}

void PrintArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void rotateArray(vector<int> &arr, int k){
    
//     vector<int> suffix(k,0) ;
//     for(int i=0; i<k; i++){
//         suffix[i] = arr[0];
//         arr.erase(arr.begin());
//     }

//     arr.insert(arr.end(),suffix.begin(),suffix.end());

// }


void rotateArray(vector<int> &arr, int k){

    k = arr.size()%k ;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());

}






