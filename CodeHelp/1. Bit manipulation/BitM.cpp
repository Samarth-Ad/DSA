#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

string DecToBin(int n){

    if (n == 0)
        return "0";
    if (n < 0)
        return "Enter Number Greater than zero";

    string ans = "";
    int digit = 0;

    for (int i = 0; n != 0; i++){
        digit = n & 1;
        ans = to_string(digit) + ans;
        n = n >> 1;
        // ans +=  pow(10,i)*digit ;
    }

    return ans;
}

string compliment(int x){
    string ans = "";
    string bin_x = DecToBin(x);

    int n = bin_x.length();

    while (bin_x.length() < 32){
        bin_x += "0";
    }

    for (char bit : bin_x){
        if (bit == '1'){
            ans += '0';
        }
        else{
            ans += '1';
        }
    }

    // ans[n-1] = '0';
    return ans;
}

int BinToDec(int n)
{

    int digit = 0;
    int ans = 0;

    int i = 0;
    while (n != 0){
        digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n = n / 10;
        i++;
    }
    return ans;
}

int main()
{
    // Write your code here
    // int n = 0;
    // cin >> n ;
    // cout << DecToBin(n) ;
    // cout << DecToBin(6) << "\n";
    // // cout << compliment(6);
    // cout << BinToDec(110);
    cout << (~5) ; 
    return 0;
}