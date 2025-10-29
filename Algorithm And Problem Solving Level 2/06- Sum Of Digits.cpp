// Problem 6.

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
int SumOfDigits(int number) {
    int Remainder = 0;
    int Sum = 0;
    while (number > 0) {
        Remainder = number % 10;
        number = number / 10;
        Sum += Remainder;
    }
    return Sum;
}
int main()
{
    cout << "Sum Of Digits = " << SumOfDigits(ReadNumber("Please Enter a Positive Number: "));
}


