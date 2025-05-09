#include <iostream>

using namespace std;

int main (){
    int length, breadth;

    cout << "Enter length and breadth of rectangle with separated by space: ";

    cin >> length >> breadth;

    cout << "The area of the garden is: " << length*breadth << endl;
    cout << "The perimeter of the garden is: " << 2*(length+breadth) << endl;

    return 0;
}