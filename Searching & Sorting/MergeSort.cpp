#include<iostream>
using namespace std;

void merge(int* arr, int s, int e) {

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int [len1];
    int *second = new int[len2];

    // Copy Values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge two sorted array's
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1  <len1 && index2 < len2){
         if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
         }

         else {
            arr[mainArrayIndex++] = second[index2++];
         }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}


void mergeSort(int* arr, int s, int e) {

    // Base Case
    if (s >= e) {
        return;
    }

    int mid = s + (e-s)/2;

    // Left part sort krenge
    mergeSort(arr, s, mid);

    // Left part sort krenge
    mergeSort(arr, mid+1 , e);

    merge(arr, s ,e); 
}


int main() {

    int arr[7] {38,27,43,3,9,82,10};
    int n = 7;

    mergeSort(arr, 0, n-1);
    
    for(int i =0; i<7; i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;
    
    return 0;
}   