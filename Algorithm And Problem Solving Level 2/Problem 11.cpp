// Problem 11.

#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int Number;
    do {
        cout << message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int ReverseNumber(int Number) {
    int Remainder = 0, Number2 = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }
    return Number2;
}
bool IsPalindromeNumber(int Number, int Number2) {
    return Number == Number2;
}
int main()
{
    int Number = ReadNumber("Please Enter a Positive Number: ");
    int Number2 = ReverseNumber(Number);
    if (IsPalindromeNumber(Number, Number2)) {
        cout << "Yes ,it is a Palindrome Number.";
    }
    else {
        cout << "No ,it is NOT a Palindrome Number.";
    }
}
