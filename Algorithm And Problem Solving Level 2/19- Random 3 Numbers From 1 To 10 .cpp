// Problem 19.

#include <iostream>
#include <cstdlib>
using namespace std;

void Print3RandomNumberFrom1To10(short From, short To) {
    for (int i = 0; i < 3; i++) {
        cout << rand() % (To - From + 1) + From << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    Print3RandomNumberFrom1To10(1, 10);
}
