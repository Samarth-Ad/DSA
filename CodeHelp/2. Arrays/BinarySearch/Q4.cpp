#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int binarySearch(vector<int> &arr,int start,int end,int key){
    
    while(start<= end){
        int mid = start + (end-start)/2 ;
        if(arr[mid] == key){
            return mid ;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1 ;
        }
    }
    return -1 ;
}

int getPivot(vector<int> &arr,int start,int end){
    
    while(start<end){
        int mid = start + (end-start)/2 ;
        if (arr[mid]>=arr[0]){
            start = mid + 1 ;
        }
        else{
            end =  mid ;
        }  
    }
    return start ;
}


int searchIn_Rotated_SortedArray(vector<int> &arr,int target){
    int n = arr.size()-1 ;
    int pivot = getPivot(arr,0,n);
    
    if(arr[pivot]<=target && target<=arr[n]){
        return binarySearch(arr,pivot,n,target);
    }
    else{
        return binarySearch(arr,0,pivot-1,target);
    }
}


int main() {
    // Write your code here
    
    return 0;
}