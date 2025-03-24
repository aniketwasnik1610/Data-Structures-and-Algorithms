#include<iostream>
using namespace std;


bool isPresent (int arr[][4], int target, int row, int col) {
 for(int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            if (arr[i][j] == target) {
                return 1;
            }
            
        }
    }
    return 0;
}

// Printing  sum row wise
void printRowSum (int arr[][4], int row, int col) {
 for(int i=0; i<3; i++) {
    int sum=0;
        for (int j=0; j<4; j++) {
            sum += arr[i][j];
        }
        cout << sum <<" ";
    }
    cout << endl;
}

// Printing sum column wise
void printColSum (int arr[][4], int row, int col) {
 for(int j=0; j<4; j++) {
    int sum=0;
        for (int i=0; i<3; i++) {
            sum += arr[i][j];
        }
        cout << sum <<" ";
    }
    cout << endl;
}


int main () {

    // creating 2D array
    int arr[3][4];

    // input
    cout << "Enter the elements" << endl;
    for(int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
            
        }
    }

    // output
    for(int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Search
    cout << "Enter the element to search" << endl;
    int target;
    cin>> target;

    if (isPresent(arr,target,3,4)) {
        cout << "Element found" << endl;
    }

    else {
        cout << "Element not found" << endl;
    }

    printRowSum(arr, 3,4);
    printColSum(arr, 4,3);


    return 0;
}