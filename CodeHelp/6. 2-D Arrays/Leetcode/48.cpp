#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {

  private:
    void Transpose(vector<vector<int>> &matrix) {

        int N = matrix.size();

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    void ReverseRows(vector<vector<int>> &matrix) {
        for (auto &row : matrix) {
            reverse(row.begin(), row.end());
        }
    }

  public:
    void rotate(vector<vector<int>> &matrix) {
        Transpose(matrix);
        ReverseRows(matrix);
    }
};

void Transpose(vector<vector<int>> &matrix);
void Print2DVector(vector<vector<int>> &arr);
void ReverseRows(vector<vector<int>> &matrix);

int main() {
    // Write your code here
    // Solution s = Solution();

    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 3, 0, 2}, {7, 1, 4, 6}};
    cout << "Before transforming" << endl << "====================================" << endl;
    Print2DVector(arr);
    cout << "After transforming" << endl << "====================================" << endl;
    ReverseRows(arr);

    Print2DVector(arr);

    return 0;
}

void Transpose(vector<vector<int>> &matrix) {

    int N = matrix.size();

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void Print2DVector(vector<vector<int>> &arr) {

    for (const auto &row : arr) {
        for (const auto &element : row) {
            cout << element << " ";
        }
        cout << '\n';
    }
}

void ReverseRows(vector<vector<int>> &matrix) {

    int N = matrix.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            swap(matrix[i][j], matrix[N - i][i]);
        }
    }
}