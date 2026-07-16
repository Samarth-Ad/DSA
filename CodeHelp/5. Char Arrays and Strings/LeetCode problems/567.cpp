#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        if (m > n) {
            return false;
        }

        vector<int> frequency_s1(26, 0);
        for (char ch : s1) {
            frequency_s1[ch - 'a']++;
        }

        vector<int> frequency_s2(26, 0);
        for (char ch : s2) {
            frequency_s2[ch - 'a']++;
        }

        if (frequency_s1 == frequency_s2) {
            return true;
        }

        for (int i = n; i < m; i++) {
            frequency_s2[s2[i] - 'a']++;
            frequency_s2[s2[i - n] - 'a']++;
            if (frequency_s1 == frequency_s2) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    // Write your code here
    Solution s = Solution();

    cout<<s.checkInclusion("ab","eidbaoo");
    return 0;
}