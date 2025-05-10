#include <iostream> 
using namespace std;

int main (){

    int age;

    cout << "Enter your Age please: ";
    cin >> age;

    if (age >= 0 && age <= 12){
        cout << "Child" << endl;
    }else if (age >= 13 && age <= 19){
        cout << "Teenager" << endl;
    }else if (age >= 20 && age <= 59){
        cout << "Adult" << endl;
    }else {
        cout << "Senior" << endl;
    }

    return 0;
}