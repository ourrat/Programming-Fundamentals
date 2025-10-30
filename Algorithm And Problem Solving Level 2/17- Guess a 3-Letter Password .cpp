// Problem 17.

#include <iostream>
#include <string>
using namespace std;

string ReadPassword(string message) {
    string Password;
    do {
        cout << message;
        cin >> Password;
    } while (Password.length() != 3);
    return Password;
}
bool GuessPassword(string OriginalPassword) {
    string Word = "";
    int Counter = 0;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                Word = char(i);
                Word = Word + char(j);
                Word = Word + char(k);
                Counter++;
                cout << "Trial [" << Counter << "] : ";
                cout << Word << endl;
                if (OriginalPassword == Word) {
                    cout << "\nPassword is " << Word << "\n";
                    cout << "Found After ";
                    cout << Counter << " Trial(s)\n";
                    return true;
                }
                Word = "";
            }
        }
    }
    return false;
}
int main()
{
    GuessPassword(ReadPassword("Please enter a 3 - Letter Password(all capital) ? \n"));
}

