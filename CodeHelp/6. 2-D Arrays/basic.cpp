#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// Linear search in 2-D array - returns true/false and i,j th co-ordinate
pair<bool, pair<int, int>> LinearSearch2D(const vector<vector<int>> &arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            if (arr[i][j] == key) {
                return make_pair(true, make_pair(i, j));
            }
        }
    }
    return make_pair(false, make_pair(-1, -1));
}

int main() {
    // Write your code here

    // int arr[3][3];

    // // Input of 2-D array
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter value for row-%d column-%d :\n",i,j);
    //         cin>>arr[i][j];
    //     }
    //     printf("\n");

    // }

    // // Output of 2-D array
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Value for row-%d column-%d : %d \n",i,j,arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // 2-D Vector
    vector<vector<int>> arr2(3, vector<int>(3)); // 3 x 3 vector

    // Input of 2-D Vector
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter value for row-%d column-%d :\n", i, j);
            cin >> arr2[i][j];
        }
        printf("\n");
    }

    // Output of 2-D Vector
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Value for row-%d column-%d : %d \n", i, j, arr2[i][j]);
        }
        printf("\n");
    }

    pair<bool, pair<int, int>> ans = LinearSearch2D(arr2, 2);
    cout << ans.first;

    return 0;
}
