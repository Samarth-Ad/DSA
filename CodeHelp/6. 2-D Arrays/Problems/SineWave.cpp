#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr);
void MakeLikeSineWave(vector<vector<int>>& arr);
void Print2DVector(const vector<vector<int>>& arr);

int main() {
    
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,3,0,2},
        {7,1,4,6}
    };
    cout << "Before transforming" << endl << "===================================="<< endl;
    Print2DVector(arr);
    cout << "After transforming" << endl << "===================================="<< endl;
    MakeLikeSineWave(arr);
    
    Print2DVector(arr);
    
    return 0;
}

void MakeLikeSineWave(vector<vector<int>>& arr){

    int rows = arr.size(), columns = arr[0].size();

    for (int j = 1; j < columns ; j+=2)
    {
        for (int i = 0; i < rows/2; i++)
        {   
            swap(arr[i][j],arr[rows-i-1][j]);
        }
        
    }
}

void printArray(const vector<int> &arr){

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}

void Print2DVector(const vector<vector<int>>& arr) {
    for (const auto& row : arr) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << '\n';
    }
}