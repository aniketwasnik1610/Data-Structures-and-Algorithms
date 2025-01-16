#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i=1;
    while (i<=n) {
        int j=1;
        while (j<=i) {
            //char ch = 'A';    //Type Casting
            //char ch = 'A' + j-1;
            char ch = 'A' + i-1;
            
            cout << ch<<" ";
            j=j+1;
        }
        cout<< endl;
        i =i+1;
    }
}

//OUTPUT:
//A             A               A               A 
//A A           A B             B B             B C 
//A A A         A B C           C C C           D E F 
//A A A A       A B C D         D D D D         G H I J 