// Problem 7.

#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}
int PrintReversedNumber(int Number) {
    int Number2 = 0, Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}
int main()
{
    cout << PrintReversedNumber(ReadNumber("Please Enter a Positive Number: "));
}
