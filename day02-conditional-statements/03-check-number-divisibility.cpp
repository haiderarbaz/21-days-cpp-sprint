#include <iostream>
using namespace std;

int main (){

    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num % 3 == 0){
        if (num % 5 == 0){
            cout << num << " is divisible by both number 3 & 5." << endl;
        } else {
            cout << num << " is not divisible by both number 3 & 5." << endl;
        }
    } else {
        cout << num << " is not divisible by both number 3 & 5." << endl;
    }


    return 0;
}