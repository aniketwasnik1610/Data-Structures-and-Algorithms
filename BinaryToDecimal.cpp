#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = ""; // Initialize ans as an empty string

    while (n != 0) {
        int bit = n & 1; // Get the last bit
        ans = to_string(bit) + ans; // Prepend the bit to the result
        n = n >> 1; // Right shift n to process the next bit
    }

    cout << ans << endl; 
        
    }
