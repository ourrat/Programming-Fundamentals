// Problem 5.

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
void ReversedOrder(int number) {
    int Remainder = 0;
    while (number > 0) {
        Remainder = number % 10;
        number = number / 10;
        cout << Remainder << endl;
    }
}
int main()
{
    ReversedOrder(ReadNumber("Please Enter a Positive Number: "));
}
