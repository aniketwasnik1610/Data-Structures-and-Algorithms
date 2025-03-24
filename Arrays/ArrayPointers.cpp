#include<iostream>
using namespace std;

int main () {

    int arr[10] = {0,1,2,3,4};

    /* cout << "Address of first element of array is " << arr << endl;
    cout << arr[0]<< endl;
    cout << "Address of first element of array is " << &arr[0] << endl;

    cout << "First Location element is " << *arr <<endl;
    cout << "First element + 1 is " << *arr+1 <<endl;

    cout << "second Location element " << *(arr+1) <<endl;
 */

    int temp[10];

    cout << sizeof(temp) << endl; // Size of array TEMP

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl; // Size of temp[0]
    
    cout << sizeof(*ptr) << endl; // Size of value
    cout << sizeof(&ptr) << endl; // Size of address

    
}