#include<iostream>
using namespace std;


int update1 (int n) {

    n++;
}

// Reference variable call
int update2 (int& n) {

    n++;
}

int main() {

    /* int i = 5;

    // Creating a reference variable
    int& j = i;

    i++;
    cout << i << " " << j << endl;
    j++;
    
    cout << i << " " << j << endl; */

    int n =5;

    // Normal function call [Pass by value]
    cout << "before " << n << endl;
    update1(n);
    cout << "After " << n << endl << endl;

    // Reference variable function call [Pass by reference]
    cout << "before " << n << endl;
    update2(n);
    cout << "After " << n << endl << endl;

    //cout<< "Printing b " << &b << endl;

    return 0;
}