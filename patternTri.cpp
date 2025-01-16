#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    int count =1;
    while (i<=n) {
        int j=1;
        while (j<=i) {
            //cout <<"*";
            //cout << i;
            cout << count <<" " ;
            count =count +1;
            j=j+1;
        } 
        cout <<endl;
        i=i+1;
    }

}


//OUTPUT:
//*          1              1
//**         22             2 3 
//***        333            4 5 6 
//****       4444           7 8 9 10