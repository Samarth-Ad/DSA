#include <iostream>
#include <queue>
using namespace std;


template <typename T>
void print(const T& val) {
    std::cout << val << "\n";
}
// For containers
template <typename Container>
void printContainer(const Container& c) {
    std::cout << "[ ";
    for (const auto& elem : c)
        std::cout << elem << " ";
    std::cout << "]\n";
}


int main() {
    // Write your code here
    queue<string> q ; 
    q.push("Code ");
    q.push("help ");
    q.push("- ");
    q.push("by ");
    q.push("Babbar ");

    printContainer(q);
    
    return 0;
}