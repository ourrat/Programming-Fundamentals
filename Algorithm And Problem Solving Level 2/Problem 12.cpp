// Problem 12.

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
void PrintInvertedNumberPattern(int Number) {
    for (int i = Number; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{

    int Number = ReadNumber("Please Enter a Positive Number: ");
    PrintInvertedNumberPattern(Number);
}
