#include<iostream>
using namespace std;

int getLength (char name[]) {
    int count =0;
    for (int i=0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}
int main() {

    char name[10];

    cout <<"Enter your name ";
    cin >> name;

    // Spaces and enter key terminates the string and puts an inbuilt \0 element in string and print previous

    cout <<"Your name is ";
    cout << name  << endl;

    cout <<"Length of string is "<<getLength(name) << endl;

    return 0;
} 