#include <iostream>
using namespace std;

int main()
{

    int array[10];
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int j, temp;
    for (int i=0; i<size-1; i += 2) {
        j = i + 1;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    cout<<endl<<"array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}