#include<iostream>
using namespace std;

bool checkPal(string& str, int i, int j) {

    // Base Case
    if (i > j) 
        return true;;

    // Recursion 
    if (str[i] != str[j]) {
        return false;
    }

    else {
        return checkPal(str, i+1, j-1);
    }

}

int main () {

    string name = "10155101";
    int n = name.length();

    bool isPali = checkPal(name , 0 , n-1);

    if (isPali) {
    cout << "The given string is Pallindrome " << endl;
    }

    else {
    cout << "The given string is not a Pallindrome " << endl;
    }
    
    return 0;
}