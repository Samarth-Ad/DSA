#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void updateByValue(int n);
void updateByReference(int &n);
int returnByReference(int &n);

int main() {
    int n=10;
    
    // cout<<"Initial n: "<<n<<endl;
    // cout<<"Calling updateByValue.... "<<endl;
    // updateByValue(n);
    // cout<<"n: "<<n<<endl;
    // cout<<"Calling updateByReference.... "<<endl;
    // updateByReference(n);
    // cout<<"n: "<<n<<endl;

    cout<<"";

    return 0;
}


void updateByValue(int n){
    n++;
}

void updateByReference(int &n){
    n++;
}

int returnByReference(int &n){
    n++;
    return n;
}