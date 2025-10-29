// Problem 2.

#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2};
int ReadNumber() {
    int Number;
    do {
        cout << "Please enter a Number: \n";
        cin >> Number;
    } while (Number < 1);
    return Number;
}
enPrimeNotPrime CheckPrimeNumber(int Number) {
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++) {
        if (Number % i == 0) {
            return enPrimeNotPrime::NotPrime;
        }
        return enPrimeNotPrime::Prime;
    }
}
void PrintPrimeNumber() {
    int Number = ReadNumber();
    for (int i = 1; i <= Number; i++) {
        if (CheckPrimeNumber(i) == enPrimeNotPrime::Prime) {
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPrimeNumber();
}


