#include<iostream>
using namespace std;

int main() {
    int array [10];
    int size;
    int j;
    cout << "Enter the size of array" << endl;
    cin >> size;

    for (int i=0; i<size; i++) {
        cin >> array[i];
    }
    
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    for (int i=0; i<size; i++) {
        cout << array[i] << " ";
    }
}