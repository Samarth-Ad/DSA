// Finding pivot in a rotated array 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getPivot(vector<int> &arr);



int main() {
    // Write your code here

    vector<int> arr = {611, 713, 815, 917, 101, 203, 305, 407, 509} ;
    vector<int> arr2 = {7,8,9,-1,6} ;
    int ans = getPivot(arr2);
    cout<< arr[ans] ;

    return 0;
}


int getPivot(vector<int> &arr){

    int s = 0 ;
    int e = arr.size() - 1;
    int mid = s + ((e-s)/2) ;
    while (s<e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1 ;
        }
        else{
            // e = mid - 1; // --> to get higher pivot 
            e = mid ; // --> to get lower pivot 
        }
        mid = s +((e-s)/2);
        
    }
    return s ;
}