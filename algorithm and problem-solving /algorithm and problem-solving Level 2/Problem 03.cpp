// Problem 3.

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
bool IsPerfect(int Number) {
    int Sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0) {
            Sum += i;
        }
    }
    return Sum == Number;
}
void PrintResult(int Number) {
    if (IsPerfect(Number)) {
        cout << Number << " Is Perfect";
    }
    else {
        cout << Number << " Is Not Perfect";
    }
}
int main()
{
    int Number = ReadNumber("Please enter a number: ");
    PrintResult(Number);
}

