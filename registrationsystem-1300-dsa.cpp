#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> names;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (names.count(name) > 0) {
            cout << name << names[name] << "\n";
        } else {
            cout << "OK" << "\n";
        }
        names[name]++;
    }

    return 0;
}