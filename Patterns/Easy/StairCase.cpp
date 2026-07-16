#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void StairCase(int N){
    for(int i=1; i<=N ; i++){
        
        int stars = 2*((i+1)/2); 
        
        for(int j=1;j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main() {
    // Write your code here
    StairCase(6);
    return 0;
}