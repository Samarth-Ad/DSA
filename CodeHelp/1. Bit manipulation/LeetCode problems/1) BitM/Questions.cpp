#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

class Solution
{
public:

//  Q1)
    int reverse(int x){
        int ans = 0 ;
        while(x != 0){
            int digit = x % 10 ;
            
            if(ans > INT_MAX/10 || ans< INT_MIN/10){
                return 0;
            }
            ans = ans*10 + digit; 
        }
        return 0 ;
    }

// Q2)
    int bitwiseComplement(int n){
        
        if(n==0 || n==1){
            return !n ;
        }
        else{
            int m = n ;
            int mask = 0 ;

            while(m != 0){
                mask = (mask << 1)|(1) ;
                m = m >> 1 ;
            }
            return ((~n) & mask) ;
        }

    }

// Q3) 
    bool isPowerOfTwo(int n){
        if(n == 1){
            return true ;
        }
        else{
            for (int i = 0; i < 30; i++){
                if(pow(2,i) == n){
                    return true ;
                }
            }
            return false; 
        }
    }
    
};
    int main(){
        Solution rev = Solution() ;
        cout << rev.reverse(123);
        return 0;
    }