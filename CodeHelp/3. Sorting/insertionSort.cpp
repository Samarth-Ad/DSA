#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;\

void printArray(vector<int> &arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}

void insertionSort(vector<int> &arr,int n){
    
    for (int i = 0; i < n ; i++)
    {
        int temp = arr[i];
        int j = i-1 ;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j-- ;
        }
        arr[j+1] = temp ;
    }
    
}


int main() {
    // Write your code here
    vector<int> arr = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}