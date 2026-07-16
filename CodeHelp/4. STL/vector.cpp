#include <iostream>
#include <vector>

using namespace std;

// if vector is full and you try to insert a new element into it, 
// it first creates a new vector of double the size of the first 
// copies the elements of first in itself 
// after this the first vector is dumped 

int main() {
    // Write your code here
    // vector<int> v ;
    // cout<< v.size() << endl << sizeof(v) ;

    // cout<< "Size -> " << v.capacity() << endl ;

    // v.push_back(1) ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.push_back(2) ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.push_back(3) ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.push_back(4) ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.push_back(5) ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // cout<< v.at(3) << endl ;
    
    // cout<<"Front " <<v.front() << endl ;
    // cout<<"Back " <<v.back() << endl ;
    
    // v.pop_back() ;
    // for (int i = 0; i < v.size() ; i++)
    // {
    //     cout<< v.at(i) << " " ;
    // }
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.pop_back() ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.pop_back() ;
    // cout<< "Size -> " << v.capacity() << endl ;
    
    // v.pop_back() ;
    // cout<< "Size -> " << v.capacity() << endl ;

    // for (int i = 0; i < v.size() ; i++)
    // {
    //     cout<< v.at(i) << " " ;
    // }
    
    // v.clear();
    // for (int i = 0; i < v.size() ; i++)
    // {
    //     cout<< v.at(i) << " " ;
    // }
    // cout<< v.size() ;
    
    
    
    
    vector<int> v2(5,1); 
    for (int i = 0; i < v2.size() ; i++)
    {
        cout<< v2.at(i) << " " ;
    }
    // output : 1 1 1 1 1 
    
    
    // copying vector in another vector
    vector<int> last(v2);
    for (int i = 0; i < v2.size() ; i++)
    {
        cout<< v2.at(i) << " " ;
    }
    // output : 1 1 1 1 1 
    
    return 0;
}