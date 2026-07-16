#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Find SquareRoot of a number using Binary Search 

// this function returns only integer part of squareRoot
long long int BSquare_Root_Int(int N){
    int start = 0, end = N, ans = 0 ;
    
    while(start<=end){

        long long int mid = start + ((end-start)/2) ;

        if(mid*mid == N){
            return mid ;
        }
        else if(mid*mid > N){
            end = mid -1 ;
        }
        else{
            ans = mid ;
            start  = mid + 1 ;
        }   
    }
    return ans ;
}


double BSquare_Root_complete(int N,int precision){
    double ans = BSquare_Root_Int(N) ;
    double factor = 1 ;

    for (double i = 0 ; i <= precision; i ++){
        factor /= 10 ;
        for(double j =ans ; j*j<N ; j+= factor ){
            ans = j ;
        }
    }
    return ans ;
}

int main() {
    
    cout<< BSquare_Root_complete(101,10) << endl;
    cout<< BSquare_Root_complete(101,10)*BSquare_Root_complete(101,10);


    return 0;
}