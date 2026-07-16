#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int getCharArrayLength(char ch[]);
void reverseCharArray(char ch[]);
bool isPalindrome(char ch[]);
char toLowerCase(char ch);

int main() {
    // Write your code here
    
    char ch[20];
    cout << "Enter your string/char_arr: ";
    cin >> ch;
    
    if (isPalindrome(ch)) {
        cout << endl << "The passed string is a palindrome";
    } else {
        cout << endl << "The passed string is not a palindrome";
    }
    
    return 0;
}

// return the size of character array excluding the count of the null character
int getCharArrayLength(char ch[]) {
    int i = 0, length = 0;
    while (true) {
        if (ch[i] == '\0') {
            break;
        }
        length++;
        i++;
    }
    return length;
}

void reverseCharArray(char ch[]) {
    
    int n = getCharArrayLength(ch);
    int s = 0, e = n - 1;
    
    while (s < e) {
        swap(ch[s++], ch[e--]);
    }
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

bool isPalindrome(char ch[]) {
    
    int n = getCharArrayLength(ch);
    
    int start=0, end=n-1;

    while(start<end){

        cout<<start<<"th element: "<<ch[start] << endl;
        cout<<end<<"th element: "<<ch[end] << endl;
        
        if(!(ch[start]==ch[end])){
            return false;
        }
        
        start++;
        end--;
    }
    return true;
    
}


// // space complexity O(n)
// bool isPalindrome(char ch[]){

//     char reversed_ch[20];
//     int n= getCharArrayLength(ch);

//     // copying the contents of ch
//     strcpy(reversed_ch,ch);

//     // reversing the ch array
//     reverseCharArray(reversed_ch);
//     cout<<"The reversed string is: "<<reversed_ch;

//     for(int i=0; i<=n; i++){
//         if(!(ch[i]==reversed_ch[i])){
//             return false;
//         }
//     }

//     return true;

// }
