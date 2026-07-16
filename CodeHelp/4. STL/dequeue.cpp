// Double ended Queue 
// Deletion and insertion at both ends

#include<iostream>
#include<deque>

using namespace std ;
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


int main(){
    // deque<int> d ;

    // d.push_back(1);
    // printContainer(d);  

    // d.push_front(2) ;
    // printContainer(d);

    // d.pop_back();
    // printContainer(d);

    // d.push_front(1);
    // printContainer(d);

    // int n = 1 ;
    // cout<< "At Index " << n << " = " << d.at(n) ;


    deque<int> d2 = {1,2,3,4,5,6};
    printContainer(d2) ;

    d2.erase(d2.begin(),d2.begin()+1);
    printContainer(d2);



    return 0 ;
}