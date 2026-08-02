#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// void PrintArrayFromHeap(int *arr,int size);
void initializeArray(int **arr, int rows, int columns);
void printArray(int **arr, int rows, int columns); // for matrix
struct student
{
    int age;
    string name;
    int phoneNo;
};


int main() {
    // Write your code here

    /*
    int *ptr = new int ;
    *ptr = 5;
    cout<<*ptr<<endl;
    cout<<"Address in heap: "<<ptr<<endl;
    cout<<"Address of address in stack: "<<&ptr<<endl;
    */

    // int n;

    // cout << "Enter the size of n: ";
    // cin >> n;

    // int *arr = new int[n];

    // for (int i = 0; i < n; i++) {
    //     cout << "Enter value for " << i << "th index: ";
    //     cin >> arr[i];
    // }

    // cout << "Size of *arr: " << sizeof(arr) << endl;

    // PrintArrayFromHeap(arr,n);

    // delete []arr;

    // void* ptr;
    // student *ptr;
    // cout<<"Size of void ptr: "<<sizeof(ptr)<<endl;
    
    // student s1 ;
    // s1.age=20;
    // s1.name="john doe";
    // s1.phoneNo=12345678;
    
    // ptr = &s1;
    // ptr = static_cast<student*>(ptr);
    
    // cout<<"Size of student s1: "<<sizeof(s1)<<endl;
    // cout<<"Size of void ptr after assigning it to s1: "<<sizeof(ptr)<<endl;

    // cout<< ptr->age;


    // initializing a 2-D dynamic array
    int rows, columns;
    
    cout<<"Enter the value for rows: ";
    cin>>rows;
    cout<<"Enter the value for columns: ";
    cin>>columns;

    int **arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[columns];
    }

    return 0;
}


// void PrintArrayFromHeap(int *arr,int size){
//     for(int i=0;i<size;i++){
//         cout<< *(arr+i) << " ";
//     }
//     cout<<endl;
// }

void initializeArray(int **arr, int rows, int columns)
{
    cout << "Enter " << rows * columns << " elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void printArray(int **arr, int rows, int columns)
{
    cout << "\nArray is:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}