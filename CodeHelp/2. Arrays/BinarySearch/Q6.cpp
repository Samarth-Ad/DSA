#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid);

int allocateBooks(vector<int> arr,int n,int m){
    int sum = 0 , start = 0 ;

    for(int i=0;i<arr.size();i++){
        sum += arr[i] ;
    }

    int end = sum ;
    int ans = -1 ;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans = mid ;
            end = mid -1 ;
        }
        else{
            start = mid + 1 ;
        }
        mid = start + (end-start)/2;
    }
    return ans ;
}


int main() {
    vector<int> books = {10, 20, 30, 40};
    int n = books.size();
    int m = 2; // number of students

    int result = allocateBooks(books, n, m);
    cout << "Minimum maximum pages allocated: " << result << endl;

    return 0;
}


bool isPossible(vector<int> arr,int n,int m,int mid){

    int pageSum = 0 ;
    int studentCount = 0 ;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]+pageSum <= mid)
        {
            pageSum += arr[i] ;
        }
        else
        {
            studentCount++ ;
            if (studentCount>m || arr[i]>mid)
            {
                return false;
            }
        }
        pageSum = arr[i] ; 
    }
    return true ;
}