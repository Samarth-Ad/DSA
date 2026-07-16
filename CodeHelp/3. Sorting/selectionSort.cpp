#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void SelectionSort(vector<int> &arr){
    int minIndex = 0 ;
    int n = arr.size() ;
    
    for (int i = 0; i < n; i++)
    {
        minIndex = i ;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<=arr[minIndex])
            {
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]) ;
    }
    
}

void PrintArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}

int main() {
    // Write your code here
    vector<int> arr = {29,72,98,13,87,66,52,51,36};
    cout<<"Before Sorting" <<endl; 
    PrintArray(arr) ;
    
    cout<<"after Sorting" <<endl; 
    SelectionSort(arr);
    PrintArray(arr) ;

return 0;
}