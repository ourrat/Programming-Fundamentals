// Problem 18.

#include <iostream>
#include <string>
using namespace std;

string ReadText() {
    string Text;
    cout << "Please Enter a Text: ";
    getline(cin, Text);
    return Text;
}
string EncryptText(string Text, short EncryptionKey) {
    for (int i = 0; i < Text.length(); i++) {
        Text[i] = char(int(Text[i]) + EncryptionKey);
    }
    return Text;
}
string DecryptText(string Text, short EncryptionKey) {
    for (int i = 0; i < Text.length(); i++) {
        Text[i] = char(int(Text[i]) - EncryptionKey);
    }
    return Text;
}

int main()
{
    string TextAfterEncryption, TextAfterDecryption;
    string Text = ReadText();
    TextAfterDecryption = EncryptText(Text, 2);
    TextAfterEncryption = DecryptText(TextAfterDecryption, 2);
    cout << "\nText Before Encryption : " << Text;
    cout << "\nText Aftre Encryption : ";
    cout << EncryptText(Text, 2);
    cout << "\nText After Decryption : ";
    cout << DecryptText(TextAfterDecryption, 2);
}
