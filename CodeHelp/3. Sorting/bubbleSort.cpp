#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintArray(vector<int> &arr);
void bubbleSort(vector<int> &arr);

int main() {
    // Write your code here
    vector<int> arr = {29,72,98,13,87,66,52,51,36};
    cout<<"Before Sorting" <<endl; 
    PrintArray(arr) ;
    
    cout<<"after Sorting" <<endl; 
    bubbleSort(arr);
    PrintArray(arr) ;
    return 0;
}


void PrintArray(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}
void bubbleSort(vector<int> &arr){
    int n = arr.size() ;
    bool swapped =  NULL ;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <n-i ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true ;
            }    
        }
        if (!swapped)
        {
            break ;
        }
        
    }
}