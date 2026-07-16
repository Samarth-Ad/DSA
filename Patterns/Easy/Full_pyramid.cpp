#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Write your code here
    
    int height = 0;
    cout << "Enter the value of height of the pyramid: " ;
    cin>>height ;

    for(int i=0; i<=height ; i++){
        // 1. spaces and stars calculation
        int spaces = height-i;
        int stars = ((2*i)-i) ;
        
        // 2. printing spaces 
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }
        
        // 3. printing stars 
        for(int k=0; k<stars; k++){
            cout<<"* ";
        }
        
        // 4. again printing spaces (completing the matrix) 
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }

        cout<< " " << endl ;

    }
    
    return 0;
}