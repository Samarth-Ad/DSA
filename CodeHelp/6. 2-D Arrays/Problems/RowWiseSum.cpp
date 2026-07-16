#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> RowWiseSum(const vector<vector<int>> arr);
pair<int,int> LargestRowSum(const vector<vector<int>> arr);
void printArray(const vector<int> &arr);


int main() {
    
    vector<vector<int>> arr = {
        {1,1,1,1},
        {2,2,2,2},
        {69,96,69,96}
    };

    // vector<int> sum = RowWiseSum(arr);
    // printArray(sum);

    pair<int,int> ans= LargestRowSum(arr);
    cout<<"The largest row of arr is: ";
    printArray(arr[ans.second]);
    cout<<"Having sum: "<< ans.first;

    return 0;
}

vector<int> RowWiseSum(const vector<vector<int>> arr) {
    // if (arr.empty()) {
        //     return;
    // }

    int rows = arr.size();
    int columns = arr[0].size();
    vector<int> ans(rows, 0);

    for (int i = 0; i < rows; i++) {
        // printArray(arr[i]);
        int sum = 0;
        for (int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
        ans[i] = sum;
    }

    return ans;
}

pair<int,int> LargestRowSum(const vector<vector<int>> arr){
    // Will return the largest sum and correspondingly it's array's index

    vector<int> ans = RowWiseSum(arr);
    
    int i=0, index=0;
    int max=ans[0];
    while(i<ans.size()){
        if(ans[i]>max){
            max = ans[i];
            index =i;
        }
        i++;
    }

    return make_pair(max,index);

}

void printArray(const vector<int> &arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}