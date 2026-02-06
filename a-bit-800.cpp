#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    string s;
    int n;

    cin >> n;
    while(n--) {
        cin >> s;
        if (s == "X++" || s == "++X") {
            x++;
        } else if (s == "--X" || s == "X--") {
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}