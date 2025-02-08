#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<string, int> wordCount;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        wordCount[word]++;
    }

    cout << "Frequency of each word:\n";
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
