#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows= matrix.size();
        int columns= matrix[0].size();
        
        int start= 0;
        int end = rows*columns -1 ;

        int mid= start + (end-start)/2;
        int element;

        while(start<=end){
            element = matrix[mid/columns][mid%columns];
            
            if(element == target){
                return true;
            }

            if(element<target){
                start = mid + 1;
            }
            
            else{
                end = mid -1;
            }
            mid= start + (end-start)/2;
        }
        return false;
    }
};


int main() {
    // Write your code here
    return 0;
}