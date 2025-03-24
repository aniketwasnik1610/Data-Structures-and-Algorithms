#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << ("Enter the size of array") << endl;
    cin >> n;
    
    int arr[n];
    cout << ("Enter the elements of the array") << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // Precompute 
    int hash[13] = {0};
    for (int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << ("Enter the number of elements to be searched") << endl;
    cin >> q;

    cout << ("Enter the numnbers") << endl;
    while(q--) {
        int num;
        cin >> num;

        // fetch
        cout << ("The elements appeared:");
        cout << hash[num] << endl;
    }
    return 0;
}