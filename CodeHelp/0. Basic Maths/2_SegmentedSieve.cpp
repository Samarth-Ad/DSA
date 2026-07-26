#include <algorithm>
#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

bool IsPrime(int n);
vector<int> sieveOfEratosthenes(int n);
vector<int> segmentedSieve(int high,int low);
void printVector(const vector<int> &arr);

int main() {
    vector<int> arr = sieveOfEratosthenes(10);
    printVector(arr);

    return 0;
}

void printVector(const vector<int> &arr){

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " " ;
    }
    cout<<endl ;
    
}

bool IsPrime(int n){

    if(n <= 1) return false;
    if(n == 2) return true;

    for (int i = 2; i < n/2; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
    
}

vector<int> sieveOfEratosthenes(int n) {

        vector<bool> prime(n+1);
        prime[0] = prime[1] = false;
        vector<int> ans ; 

        for (int i = 2; i <= n; i++)
        {
            if(IsPrime(i)){
                ans.push_back(i);
                for (int j = 2*i; j < n; j+=i)
                {
                    prime[j]=false;
                }
                
            }
        }
        return ans;

    }

vector<int> segmentedSieve(int low, int high){

    vector<int> primes = sieveOfEratosthenes(sqrt(high));
    vector<bool> isPrime(high - low + 1, true);

    for(int p : primes){

        // First multiple of p inside [low, high]
        int start = max(p * p, ((low + p - 1) / p) * p);

        for(int j = start; j <= high; j += p){
            isPrime[j - low] = false;
        }
    }

    vector<int> ans;

    for(int i = low; i <= high; i++){
        if(i > 1 && isPrime[i - low])
            ans.push_back(i);
    }

    return ans;
}