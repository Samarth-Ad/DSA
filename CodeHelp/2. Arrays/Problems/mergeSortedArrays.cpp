#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(vector<int> &arr1, vector<int> &arr2);
vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2);
void PrintArray(vector<int> &arr);

int main() {
    // Write your code here

    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // vector<int> merged = mergeArrays(arr1, arr2);
    // PrintArray(merged);

    PrintArray(arr1);
    cout<<endl;
    PrintArray(arr2);
    cout<<endl;
    vector<int> merged = mergeSortedArrays(arr1, arr2);

    PrintArray(merged);

    return 0;
}

vector<int> mergeArrays(vector<int> &arr1, vector<int> &arr2) {

    vector<int> merged;
    for (int i = 0; i <= arr1.size() - 1; i++) {
        merged.push_back(arr1[i]);
    }

    for (int i = 0; i <= arr2.size() - 1; i++) {
        merged.push_back(arr2[i]);
    }

    return merged;
}

vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2) {

    vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {

        if (arr1[i] > arr2[j]) {
            // cout << arr2[j];
            merged.push_back(arr2[j]);
            j++;
        } 
        else {
            // cout << arr1[i];
            merged.push_back(arr1[i]);
            i++;
        }
    }
    while (i < arr1.size()){
        merged.push_back(arr1[i++]);
    }
    while (j < arr2.size()){
        merged.push_back(arr2[j++]);
    }

    return merged;
}

void PrintArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}