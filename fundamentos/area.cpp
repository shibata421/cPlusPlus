#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    double PI = 3.1415;
    double raio;
    cout << "Entre o raio da circunferência: ";
    cin >> raio;

    printf("A área da circunferência é %f", PI * raio * raio);

    return 0;
}