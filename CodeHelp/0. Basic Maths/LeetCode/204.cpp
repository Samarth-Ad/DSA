#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Sieve of eratosthenes
class Solution {
  private:
    bool IsPrime(int n) {

        if (n == 1 || n == 2 || n == 0) {
            return true;
        }

        for (int i = 2; i < n / 2; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

  public:
    int countPrimes(int n) {

        vector<bool> prime(n+1);
        prime[0] = prime[1] = false;
        int count =0 ;
        for (int i = 2; i <= n; i++)
        {
            if(IsPrime(i)){
                count++;

                for (int j = 2*i; j < n; j+=i)
                {
                    prime[j]=false;
                }
                
            }
        }
        return count;

    }
};

int main() {
    // Write your code here
    return 0;
}