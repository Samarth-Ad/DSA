#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    bool binarySearch(vector<int> &row,int target){
        int start =0 ;
        int end= row.size()-1;

        int mid = start + (end-start)/2;
        while(start<=end){
            if(row[mid] == target){
                return true;
            }
            else if(target>row[mid]){
                start = mid +1 ;
            }
            else{
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }

        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();

        for (int i = 0; i < rows; i++)
        {
            if(binarySearch(matrix[i],target)){
                return true;
            }
        }

        return false;

    }
};

int main() {
    // Write your code here
    return 0;
}