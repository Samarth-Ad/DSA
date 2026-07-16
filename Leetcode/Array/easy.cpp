#include <algorithm>
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

// Q1 Two sum ()
vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        // Difference calculate
        int difference = target - nums[i];

        // Check if difference exists in hashmap=>("mp")
        if (mp.find(difference) != mp.end()) {
            return {mp[difference], i};
        }

        // If difference doesn't exist in hashmap then store it
        mp[nums[i]] = i;
    }

    return {};
}

// Q2 Remove duplicates
int removeDuplicates(vector<int> &nums) {
    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
        if (nums[i] == nums[j]) {
            continue;
        }
    }

    return i + 1;
}

// Q3 Best time to buy and sell stocks
int maxProfit(vector<int> &prices) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

// Q4 PlusOne [1,2,3] + 1 => [1,2,4]
vector<int> plusOne(vector<int> &digits) {
    // Reverse traversal
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }

        if (digits[i] == 9) {
            digits[i] = 0;
        }
    }

    digits.insert(digits.begin(), 1);

    return digits;
}

// Q5 Missing Number [9,6,4,2,3,5,7,0,1] => 8
int missingNumber(vector<int> &nums) {
    int n = nums.size();
    int expected_sum = (n * (n + 1)) / 2;

    int actual_sum = 0;
    for (int num : nums) {
        actual_sum += num;
    }

    return expected_sum - actual_sum;
}

// Q6 Maximum Sum of subarray [-2,1,-3,4,-1,2,1,-5,4] => max = 6
int maxSubArray(vector<int> &nums) {
    // Brute force
    // int maxSum = INT_MIN ;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int sum = 0 ;
    //     for (int j = i; j < nums.size(); j++)
    //     {
    //         sum += nums[j];
    //         maxSum = max(maxSum,sum);
    //     }

    // }

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(currentSum + nums[i], nums[i]);

        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
}

// Q7 Move Zeros [0,1,0,3,12] => [1,3,12,0,0]
void moveZeroes(vector<int> &nums) {
    
    int j = 0;

    for (int i = 0; i < nums.size(); i++) {
    
        if (nums[i] != 0) {

            swap(nums[i], nums[j]);
            j++;

        }
    
    }
}

// Q8 Find Duplicates [1,2,3,1]=> True
bool containsDuplicate(vector<int>& nums) {
    
    unordered_set<int> seen;
    // // Solution 1

    for(int i=0; i<nums.size(); i++){

        if(seen.find(nums[i]) != seen.end()){
            return true;
        }

        seen.insert(nums[i]);
    }
    return false;

    // // Solution 2 (nlog(n))
    // sort(nums.begin(),nums.end());

    // for (int i = 0; i < nums.size(); i++){
    //     if(nums[i] == nums[i+1]){
    //         return true;
    //     }
    // }
    // return false;
    

}

int main() {
    // Write your code here

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(arr);
    return 0;
}