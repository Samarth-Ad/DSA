#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // Write your code here
    return 0;
}

class Solution {
public:
    int uniqueOf(vector<int> &arr, int n) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans ^ arr[i];
        }
        return ans;
    }

};