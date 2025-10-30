// Problem 14.

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
void PrintInvertedLetterPattern(int Number) {
    for (int i = 65 + Number - 1; i >= 65 ; i--) {
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++) {
            cout << char(i);
        }
        cout << endl;
    }
}
int main()
{
    PrintInvertedLetterPattern(ReadNumber("Please Enter a Positive Number: "));
}

