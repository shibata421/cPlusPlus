#include <iostream>
using namespace std;

int main() {
    // insertion operator
    cout << "Hi!\n";
    cout << 3.14 << endl;

    int x = 3;
    cout << x << endl;

    string name;
    cout << "Enter your name: ";

    // extraction operator
    cin >> name;
    
    cout << name << endl;

    return 0;
}