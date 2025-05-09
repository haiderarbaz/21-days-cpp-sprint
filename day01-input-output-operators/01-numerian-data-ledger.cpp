#include <iostream>

using namespace std;

int main(){

    cout << "Please enter an integer, a long long, a char, a float, and a double separated by spaces: \n";

    int int_val;
    long long_val;
    char char_val;
    float float_val;
    double double_val;

    cin >> int_val >> long_val >> char_val >> float_val >> double_val;

    cout << int_val << endl;
    cout << long_val << endl;
    cout << char_val << endl;
    cout << float_val << endl;
    cout << double_val;
    return 0;
}