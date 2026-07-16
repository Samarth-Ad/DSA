#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void TriangularAlphabets(int N){

    for(int i=1 ; i<=N ; i++){

        for(int j=65 ; j<65+i ; j++){
            cout<< (char)j << " " ;
        }

        cout<<endl ;

    }
    // A 
    // A B 
    // A B C 
    // A B C D 
    // A B C D E 
    // A B C D E F 

}


void ReverseTriangularAlphabets(int N){

    for(int i=N ; i>=1 ; i--){
        for(int j=65 ; j<65+i ; j++){
            cout<< (char)('A'-1+i) << " " ;
        }

        cout<<endl ;
    }

    // E E E E E 
    // D D D D 
    // C C C 
    // B B 
    // A 

}

int main() {
    // Write your code here
    // TriangularAlphabets(6);
    ReverseTriangularAlphabets(6);
    return 0;
}