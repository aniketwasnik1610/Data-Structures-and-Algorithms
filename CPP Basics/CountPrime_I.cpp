#include <iostream>
using namespace std;

// Brute Force Method (TIME LIMIT EXCEEDED)
// Time Complexity = O(n^20)

class Solution {
private:
    bool isPrime(int n) {
        if (n < 2) return false; 

        for (int i = 2;  i< n; i++) { 
            if (n % i == 0) {
                return false; 
            }
        }
        return true; 
    }

public:
    int countPrimes(int n) {
        if (n < 2) return 0; 

        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime(i)) {
                count++; 
            }
        }
        return count; 
    }
};

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution solution;
    int primeCount = solution.countPrimes(n); // Count primes less than n
    cout << "Number of primes less than " << n << ": " << primeCount << endl;

    return 0; // Return statement for main
}

