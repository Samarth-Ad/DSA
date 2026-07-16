#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Q1) Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1.
// 2. 'arr' may contain duplicate elements.
// Example:
// Input: 'arr' = [0,1,1,5] , 'k' = 1
// Output: 1 2
// Explanation:
// If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

class solution {
  private:
    int firstOccurrence(vector<int> &arr, int n, int k);
    int lastOccurrence(vector<int> &arr, int n, int k);

    int firstOccurrence(vector<int> &arr, int n, int k) {
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s <= e) {
            if (arr[mid] == k) {
                ans = mid;
                e = mid - 1;
            } 
            else if (arr[mid] > k) {
                e = mid - 1;
            } 
            else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    int lastOccurrence(vector<int> &arr, int n, int k) {
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;

        int ans = -1;
        while (s <= e) {
            if (arr[mid] == k) {
                ans = mid;
                s = mid + 1;
            } 
            else if (arr[mid] > k) {
                e = mid - 1;
            } 
            else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

  public:
    pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
        return {firstOccurrence(arr, n, k), lastOccurrence(arr, n, k)};
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 3, 3, 4, 5};
    int k = 3;

    // int first = firstOccurrence(arr, arr.size(), k);
    // int last = lastOccurrence(arr, arr.size(), k);

    // cout << first << " " << last << endl;

    return 0;
}
