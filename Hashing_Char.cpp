#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << ("Enter the string:");
    cin >> s;

    // Pre compute
    int hash[256] = {0};
    for (int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cout << ("Enter number of characters to be searched:");
    cin >> q;

    cout << ("Enter characters to be searched:");
    while(q--) {
        char c;
        cin >> c;

        //fetch
        cout << ("Number of times appeared:");
        cout << hash[c] << endl;
    
    }
    return 0;
}