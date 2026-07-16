#include <iostream>
#include<stack>

using namespace std;
int main() {
    // Write your code here
    stack<string> s ;

    s.push("Code ");
    s.push("help ");
    s.push("- ");
    s.push("by ");
    s.push("Babbar ");

    cout << s.top();
    s.pop();
    cout << s.top();
    s.pop();
    cout << s.top();
    s.pop();
    cout << s.top();
    s.pop();
    cout << s.top();    
    
    
    return 0;
}