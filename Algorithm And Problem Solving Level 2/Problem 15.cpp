// Problem 15.

#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string message) {
    int Number;
    do {
        cout << message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void PrintLetterPattern(int Number) {
    for (int i = 65; i < 65 + Number; i++) {
        for (int j = 65; j <= i ; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}
int main()
{
    PrintLetterPattern(ReadNumber("Please Enter a Positive Number: "));
}
