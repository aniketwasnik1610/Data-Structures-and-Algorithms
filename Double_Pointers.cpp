#include<iostream>
using namespace std;


void update(int **ptr) {
    //ptr = ptr + 1;
    // Kuch change hoga?? --> N00

    //*ptr = *ptr + 1;
    // Kuch change hoga?? --> YES

    **ptr = **ptr + 1;
    // Kuch change hoga?? --> YES

}


int main() {

    int i = 5;

    int* ptr = &i;
    int** ptr2 = &ptr;

    /* cout << endl << "Sab chang si" << endl << endl;

    cout << "Printing ptr " << ptr << endl;
    cout << "Address of ptr " << &ptr << endl;

    cout << "Printing ptr2 " << *ptr2 << endl << endl;

    // Pritning value of i

    cout << "Printing value of i" << endl;
    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;

    // Printing address of ptr

    cout << "Printing address of ptr" << endl;
    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl;

    // Printing address of ptr2

    cout << "Printing address of ptr2" << endl;
    cout << ptr2 << endl;      
 */

    cout << endl << endl;
    cout << "Before" << endl;
    cout << i << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;

    update (ptr2);
    
    cout << endl << endl;
    cout << "After" << endl;
    cout << i << endl;
    cout << ptr << endl;
    cout << ptr2 << endl;

    return 0;
}