#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int BinarySearch(int arr[], int key, int start, int end);

int main()
{

    int arr[] = {1, 2, 2, 2, 5, 6, 7, 8};
    // cout << BinarySearch(arr,5,0,7);

    return 0;
}

int BinarySearch(int arr[], int key, int start, int end)
{
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}