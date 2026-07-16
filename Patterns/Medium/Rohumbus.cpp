#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printSolidPattern(int N);
void printHollowPattern(int N);


int main() {
    // Write your code here
    
    // printSolidPattern(6);
    printHollowPattern(6);
    
    return 0;
}

void printSolidPattern(int N){
    
    for(int i=0; i<N ; i++){

        //printing spaces 
        for(int j=N-i;j>0 ; j--){
            cout<<" ";
        }

        // printing stars
        for(int j=0; j<N; j++){
            cout<<"*";
        }

        cout<<endl;

    }

}

void printHollowPattern(int N){

    for (int i = 1; i <= N; i++){
        
        for(int j=1; j<=N-i; j++){
            cout<<" ";
        }

        for (int j=1; j<=N ; j++){
            
            if(i==1 || i==N || j==1 || j==N){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        
        cout << endl;

    }
    
}
