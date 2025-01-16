#include<iostream>
using namespace std;

int main() {

    int num =5;
    int *ptr = &num;

    double n = 4.3;
    double *p = &n;

    // Printing the value and address of pointer
    cout <<"The value of num is" << *ptr << endl;
    cout <<"The address of num is" << ptr << endl;

    cout << endl;

    /* cout <<"The size of integer is" << sizeof(num) << endl;
    cout <<"The size of pointer is" << sizeof(ptr) << endl;

    cout <<"The size of double is" << sizeof(n) << endl;
    cout <<"The size of pointer is" << sizeof(p) << endl; */


    // Copying a pointer

    int no = 3;
    int *a = &no;

    int *q = a;
    cout<< a << " - " << q << endl; // Print address
    cout<< *a << " - " << *q << endl; // Print value 

    cout << endl;

    // Incrementing Pointer

    int i = 3;
    int *t =&i;

    // *t = *t+1;
    (*t)++;
    cout << *t << endl;

    cout << "t Before" << t<< endl;

    // t =t+1;
    t++;
    cout << "t After" << t<< endl;

} 
