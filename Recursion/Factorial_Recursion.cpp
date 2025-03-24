#include<iostream>
using namespace std;

int factorial(int n) {

    // Base Case
    if (n == 0) return 1;


    // Recursive relatioon
    return n * factorial(n-1);
}

int main() {

    int n;
    cout << "Enter the number to calculate it's Factorial: " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}