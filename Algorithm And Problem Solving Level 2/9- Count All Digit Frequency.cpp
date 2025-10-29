// Problem 9.

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
int CountDigitFrequency(int Number, short DigitFreq) {
    int CountDigit = 0, Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == DigitFreq) {
            CountDigit++;
        }
    }
    return CountDigit;
}
void PrintAllDigitFrequency(int Number) {
    for (int i = 1; i < 10; i++) {
        int CountDigit = CountDigitFrequency(Number, i);
        if (CountDigit > 0) {
            cout << "Digit " << i << " Frequeny is " << CountDigit << " Time(s)." << endl;
        }
    }
}
int main()
{
    int Number = ReadNumber("Please Enter a Positive Number: ");
    PrintAllDigitFrequency(Number);
}

