#include <iostream>
using namespace std;

bool search(int array[], int size, int x)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
        {
            return 1;
        }
    }
    return 0; 
}
int main()
{

    int array[6] = {1, 5, 7, -4, 2, 11};
    int x;
    cout << "Enter the element to search for " << endl;
    cin >> x;

    bool found = search(array, 10, x);

    if (found)
    {
        cout << "x is present" << endl;
    }
    else
    {
        cout << " x is not present" << endl;
    }
}