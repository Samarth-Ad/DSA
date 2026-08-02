#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007LL;

long long Factorial(int n);


int main() {
    // Write your code here
    return 0;
}

long long Factorial(int n){

    long long result = 1 ;

    if (n==1 || n==0) return 1;
    if (n==2) return 2;

    for (int i = 2; i <= n; i++){
        result *= i ;
        result %= MOD;
    }
    return result;

}