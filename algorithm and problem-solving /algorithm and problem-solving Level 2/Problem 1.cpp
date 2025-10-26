// Problem 1.

#include <iostream>
using namespace std;

void PrintTableHeader() {
    cout << "\n\n\n\t\tMultiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n____________________________________________________________________________________\n";
}
string ColumSperator(int i) {
    if (i < 10) {
        return "   |";
    }
    else {
        return "  |";
    }
}
void ContentTable() {
    PrintTableHeader();
    for (int i = 1; i <= 10; i++) {
        cout << i << ColumSperator(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
int main()
{
    
    ContentTable();
}

