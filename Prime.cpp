#include <iostream>
using namespace std;

bool isPrime(int n)
{

    if (n < 2) 
    return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "The entered number is a Prime number" << endl;
    }
    else
    {
        cout << "The entered number is a NOT Prime number" << endl;
    }
}   