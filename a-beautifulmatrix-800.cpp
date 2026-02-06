#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                cout << (abs(3-j) + abs(3-i)) << "\n";
            }
        }
    }
}