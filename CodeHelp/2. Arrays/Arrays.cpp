#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void update(int arr[], int n);
bool search(int arr[], int n, int key);
int MinOf(int arr[], int n);
int MaxOf(int arr[], int n);
void Reverse(int arr[], int n);
void swapAlternate(int arr[],int size);
int uniqueOf(int arr[],int n);
int findDuplicate(vector<int> arr);



int main() {
    // int arr[] = {10,8,-9,69,100,32,45};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // cout << "Normal arr : ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // swapAlternate(arr, n);

    // cout << "After Alternating: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;




    return 0;
}

void update(int arr[], int n) {
    cout << endl << "Inside the function" << endl;

    arr[0] = 120;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}

bool search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int MinOf(int arr[], int n) {
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int MaxOf(int arr[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void Reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
}

void swapAlternate(int arr[] , int size){
    for(int i=0 ; i<size-1 ; i+=2){
        swap(arr[i],arr[i+1]);
    }    
}

int uniqueOf(int arr[] , int n){
    
    int ans = 0 ;

    for(int i=0 ; i<n ; i++){
        ans =  ans^arr[i];
    }
    return ans ;
}

int findDuplicate(vector<int> arr){
    int ans = 0 ;

    for(int i=0 ; i<arr.size() ; i++){
        ans = ans^arr[i] ;
    }

    for(int i=1 ; i<arr.size() ; i++){
        ans = ans^i ;
    }

    return ans ;

}





