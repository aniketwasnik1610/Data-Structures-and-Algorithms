#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    // Initialize the array
    int arr[] = {64, 25, 12, 22, 11};

    // Calculate the size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Call selection sort
    selectionSort(arr, n);

    // Print the sorted array
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; 
}
