#include<iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    int i=1;
    while (i<=n) {
        
        // For printing space
        int space = n-i;
        while (space) {
            cout <<" ";
            space = space-1;
        }

        // For printing stars
        int j=1;
        while (j<=i) {
            cout <<"*";
            j = j+1;
        }
        cout<<endl;
        i =i+1;
    }
}


//OUTPUT:
//   *
//  **
// ***
//****