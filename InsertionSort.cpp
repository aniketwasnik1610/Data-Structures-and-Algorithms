#include<iostream>
#include<algorithm>
using namespace std;

int insertionSort (int arr[], int n) {

    
    int i,j,temp;

    for ( i=1; i<n; i++) {
         int temp = arr[i];
        for ( j =i-1; j>=0; j--) {

            if (arr[j]> temp ) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main() {

 int arr[] =  {10,9,5,2,6};
int n = sizeof(arr) / sizeof(arr[0]);

 insertionSort(arr,n);
 
 cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; 

}