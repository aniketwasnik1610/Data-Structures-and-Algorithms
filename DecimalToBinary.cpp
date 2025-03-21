#include <iostream>
using namespace std;

int pow(int a, int b)
{

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
}
