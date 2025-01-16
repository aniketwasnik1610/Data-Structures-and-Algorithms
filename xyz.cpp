#include <iostream>
using namespace std;


int partition(int *arr, int s, int e) {

    int pivot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Place pivot at correct position
    int pivotIndex = s + count;
    
    swap(arr[pivotIndex], arr[s]);

    // Left and Right wala part sambhal lete hai
    int i=s, j=e;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++] , arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int *arr, int s, int e) {

    // Base Case
    if(s>=e) return;

    // Partition create krnge
    int p = partition(arr,s,e);

    // Left part sort krenge
    quickSort(arr, s, p-1);

    // Right part sort krenge
    quickSort(arr, p+1, e);

}

int main() {
    int arr[5]= {64, 25, 12, 22, 11}; // array
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {

        cout << arr[i] << " ";

    }
    return 0;
}

