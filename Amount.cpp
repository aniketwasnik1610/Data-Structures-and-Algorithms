#include<iostream>
using namespace std;

int main () {

    int amount = 1330;
    int num100, num50, num20, num1;
    num100 = num50 = num20 = num1 = 0;
    int noNotes;

    num100 = amount / 100;
    amount %= 100;
    
    num50 = amount / 50;
    amount %= 50;
    
    num20 = amount / 20;
    amount %= 20;
    num1 = amount;


    // while (amount != 0) {
    //     if (amount >= 100) {
    //         noNotes = amount / 100;
    //         num100 += noNotes;
    //         amount -= noNotes*100;
    //     } else if (amount >= 50) {
    //         noNotes = amount / 50;
    //         num50 += noNotes;
    //         amount -= noNotes*50;
    //     } else if (amount >= 20) {
    //         noNotes = amount / 20;
    //         num20 += noNotes;
    //         amount -= noNotes*20;
    //     } else {
    //         num1 += amount;
    //         amount -= num1 * 1;
    //     }
    // }

    cout<<"100 50 20 1 => " <<num100<<" " << num50<<" " << num20<< " " << num1;
}





// #include <iostream>
// using namespace std;

// int main() {
//     int amount = 1330; // The amount we need to make
//     int num100, num50, num20, num1;

//     // Calculate the number of each denomination needed
//     num100 = amount / 100;
//     amount %= 100;
    
//     num50 = amount / 50;
//     amount %= 50;
    
//     num20 = amount / 20;
//     amount %= 20;
    
//     num1 = amount; // Remaining amount is the number of 1 notes

//     // Output the results using a switch statement
//     int denominations[] = {100, 50, 20, 1}; // To iterate through denominations
//     int counts[] = {num100, num50, num20, num1}; // To iterate through counts

//     for (int i = 0; i < 4; i++) {
//         switch (denominations[i]) {
//             case 100:
//                 cout << "Number of 100 notes: " << counts[i] << endl;
//                 break;
//             case 50:
//                 cout << "Number of 50 notes: " << counts[i] << endl;
//                 break;
//             case 20:
//                 cout << "Number of 20 notes: " << counts[i] << endl;
//                 break;
//             case 1:
//                 cout << "Number of 1 notes: " << counts[i] << endl;
//                 break;
//             default:
//                 cout << "Unknown note denomination." << endl;
//                 break;
//         }
//     }

//     return 0;
// }
