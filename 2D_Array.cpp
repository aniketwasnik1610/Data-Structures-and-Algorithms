#include<iostream>
using namespace std;

int main () {

    cout << "Enter the rows and Columns " << endl;
    int row;
    cin >> row;

    int col;
    cin >> col;


    // Creating a 2D Array
    int ** arr = new int*[row]; 
    for (int i=0; i< row; i++) {
        arr[i] = new int[col];
    }
    // Creation Done 

    // Taking Input
    for (int i=0; i<row ; i++) {
        for (int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    // Giving  Output
    for (int i=0; i<row ; i++) {
        for (int j=0; j<col; j++) {
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }


    // Releasing mmemory
    for (int i=0; i< row; i++) {
        delete []arr[i];
    } // This will delete the row pointers array 

    delete [] arr; // This will delete the column array corresponding to the row pointer array 
    
    
    return 0;
}