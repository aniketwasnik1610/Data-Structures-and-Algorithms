#include<iostream>
#include<algorithm>
using namespace std;


bool checkPalindrome (char a[], int n ) {
    int start = 0;
    int end = a.size()-1;

    while(start<=end) {
        if(a[start]!= a[end]) {
            return 0;   
        }
        else {
            start++;
            end--;
        }
    }
    return 1;
}

int getLength (char a[]) {
    int count =0;
    for (int i=0; a[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {

    char a[20];
    int length = getLength(a);

    cout<< "Enter the string " << endl;
    cin >> a;
    cout << checkPalindrome (a, length);
}