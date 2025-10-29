// Problem 4.

#include <iostream>
using namespace std;

int ReadNumber(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    }while(number <= 0);
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
void PrintPerfectNumbersFrom1ToN(int Number) {
    for (int i = 1; i <= Number; i++) {
        if (IsPerfect(i)) {
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPerfectNumbersFrom1ToN(ReadNumber("Please Enter a Positive Number: "));
}

