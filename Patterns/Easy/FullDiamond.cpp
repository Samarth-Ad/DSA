#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 


int main() {
    // Write your code here
    
    int N = 0;
    cout << "Enter the value of N for Full diamond: ";
    cin >> N;

    // First Half of diamond
    for (int i = 1; i <= N; i++){
        
        // printing spaces
        for (int j = 1; j <= N-i; j++){
            cout<< " " ;
        }
        
        // printing stars 
        for (int j = 1; j <= i; j++){
            cout<< "* " ;
        }
        cout << endl ;
        
    }
    
    // second half of diamond 
    for(int i = N; i >=1; i--){
        // printing spaces
        for(int j = 1; j<=N-i ; j++){
            cout<< " " ;
        }
        
        // printing stars 
        for (int j = 1; j <= i; j++){
            cout<< "* " ;
        }
        cout << endl ;
    }
    
    return 0;
}