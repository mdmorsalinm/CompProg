#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;
    string output = "";

    for (char c : s) {
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            output += '.';
            output += c;
        }
    }

    cout << output << "\n";
    return 0;
}