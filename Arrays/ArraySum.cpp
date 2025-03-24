#include <iostream>
using namespace std;

int main()
{

    int size;
    cin >> size;

    int sum = 0;
    int array[10];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
        cout << sum << endl;

}
