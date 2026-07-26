#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int modularExponentiation(int x,int n,int m);

int main() {
    // Write your code here
    return 0;
}

int modularExponentiation(int x,int n,int m){
    int result ; 

    while(n>0){

        if(n&1){ // if odd 
            result = (1LL*result * (x%m))%m;
        }
        x= (1LL* (x)%m * (x)%m)%m;

        n=n>>1;
    }
    return result;
}

// PIGEON-HOLE-PRINCIPLE https://www.geeksforgeeks.org/engineering-mathematics/discrete-mathematics-the-pigeonhole-principle/

// Catalan Numbers https://www.geeksforgeeks.org/maths/catalan-numbers/