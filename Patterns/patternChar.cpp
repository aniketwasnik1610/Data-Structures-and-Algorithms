#include<iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int i=1;
    while (i<=n) {
        int j=1;
        while (j<=n) {
          //char  ch = 'A' + i-1;   // Type Casting 
          char  ch = 'A' + j-1;
            cout << ch <<" ";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}

//OUTPUT :
//A A A A A           A B C D E 
//B B B B B           A B C D E 
//C C C C C           A B C D E 
//D D D D D           A B C D E
//E E E E E           A B C D E