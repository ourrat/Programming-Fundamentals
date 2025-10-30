// Problem 13.

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
void PrintInvertedPattern(int Number) {
    for (int i = 0; i <= Number; i++) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    PrintInvertedPattern(ReadNumber("Please Enter a Positive Number: "));
}

