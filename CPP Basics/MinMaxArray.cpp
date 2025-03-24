#include<iostream>
using namespace std;

int getMax(int array[],int n) {

    int max= INT32_MIN;
    for (int i=0; i<n; i++) {
        if (array[i]> max) {
            max= array[i];
        }
    }
    return max;
}

int getMin(int array[],int n) {

    int min= INT32_MAX;
    for (int i=0; i<n; i++) {
        if (array[i]< min) {
            min= array[i];
        }
    }
    return min;
}

int main() {
    int size;
    cin >> size;

    int array[100] ;

    for (int i=0; i<size; i++) {
        cin >> array[i];
    }    
    cout <<  " The maximum value is" << getMax(array, 5) << endl;
    cout <<  " The minimum value is" << getMin(array, 5) << endl;

}