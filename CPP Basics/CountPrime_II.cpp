#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes (Less Time Complexity)
// Time Complexity = O(n log log n)

//First marking all the no's as prime numbers and then un-marking them as they come in the table of prime no's and then returning the count

class Solution
{
public:
    int countPrimes(int n)
    {

        int count = 0;
        vector<bool> isPrime(n + 1, true);

        if (n < 2)
            return false;

        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                count++;

                for (int j = 2 * i; j < n; j = j + i)
                {
                    isPrime[j] = 0;
                }
            }
        }
        return count;
    }
};

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    Solution solution;
    int primeCount = solution.countPrimes(n); // Count primes less than n
    cout << "Number of primes less than " << n << ": " << primeCount << endl;

    return 0; // Return statement for main
}
