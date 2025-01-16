#include<iostream>
using namespace std;

void printArray(int arr[],int size) {
for (int i=0;i<size;i++) {
cout<< "The array is: " <<arr[i];
}
}


int main() {

int array[5]={1,5};

printArray(array,5);
int arrsize = sizeof(array)/sizeof(int);
cout<< arrsize << endl;

}
