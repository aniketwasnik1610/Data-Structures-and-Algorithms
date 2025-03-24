#include<iostream>
using namespace std;

void reverse(string& str, int i, int j) {

    // Base Case
    if (i>j) 
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i , j);    

}

int main() {

    string name = "aniket";

    int n = name.length();
    reverse(name, 0, n-1);

    cout << name << endl;

    return 0;
}