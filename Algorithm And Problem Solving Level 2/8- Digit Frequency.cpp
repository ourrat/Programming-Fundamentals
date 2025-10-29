// Problem 8.

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
int CountDigitFrequency(int Number, short DigitToCheck) {
    int FreqCount = 0, Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == DigitToCheck) {
            FreqCount++;
        }
    }
    return FreqCount;
}
int main()
{
    int Number = ReadNumber("Please Enter a Positive Number: ");
    short DigitToCheck = ReadNumber("Please enter Digit To Check: ");
    cout << "Digit " << DigitToCheck << " Frequency is ";
    cout << CountDigitFrequency(Number, DigitToCheck) << " Time(s).";
}

