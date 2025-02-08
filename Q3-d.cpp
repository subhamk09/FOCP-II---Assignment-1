#include <iostream>
using namespace std;

int main() {
    string str;
    char replaceChar = '*';

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            str[i] = replaceChar;
        }
    }

    cout << "String after replacing vowels: " << str << endl;

    return 0;
}
