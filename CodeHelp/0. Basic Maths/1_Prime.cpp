#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int n);

int main() {
    // Write your code here
    cout<<IsPrime(37);

    return 0;
}

bool IsPrime(int n){

    if(n==1 || n==2 || n==0){
        return true;
    }

    for (int i = 2; i < n/2; i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
    
}