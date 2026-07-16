#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getCharLength(char ch[]);
void reverseCharArray(char ch[]);

int main() {
    // Write your code here
    
    char ch[20] ;
    cout<<"Enter your string/char_arr: ";
    cin>>ch ;
    
    
    cout<<endl<<"The length og char arr: "<<getCharLength(ch);
    cout<<endl<<"The Reversed array is: ";
    reverseCharArray(ch);
    
    
    return 0;
}

int getCharLength(char ch[]){
    int i= 0, length= 0 ;
    while (true){
        if(ch[i] == '\0'){
            break;
        }
        length++;
        i++;
    }
    return length;
}

void reverseCharArray(char ch[]){
    
    int n= getCharLength(ch);
    int s= 0, e=n-1;

    while(s<e){
        swap(ch[s++],ch[e--]);
    }
    cout<<ch;
}








