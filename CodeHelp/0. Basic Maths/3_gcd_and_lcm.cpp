#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b);
int LCM(int a, int b);

int main() {
    // Write your code here
    int a = 100;
    int b = 20;
    cout << "GCD of " << a << " and " << b << " is : " << GCD(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is : " << LCM(a, b);
    return 0;
}


int GCD(int a, int b) {

    if (a == 0) return b;


    if (b == 0) return a;

    if (a > b)
        return GCD(a - b, b);
    else
        return GCD(a, b - a);
}

// lcm(a,b) * gcd(a,b) = a*b

int LCM(int a, int b){
    return ((a*b)/GCD(a,b));
}








