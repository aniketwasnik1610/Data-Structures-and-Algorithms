#include<iostream>
using namespace std;

int main () {

    int  arr[6] = {1,2,3,4,5,6};
    char ch[6] = "abcde";

    cout << arr << endl;

    // Print's entire string 
    cout << ch << endl;

    char *c = &ch[0];
    
    // Prints entire string  
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    char *o = "abcde";
    cout << p << endl;

    cout << o << endl;

}