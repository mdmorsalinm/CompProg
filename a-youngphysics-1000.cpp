#include <iostream>

using namespace std;

int main() {
    int n;
    int x = 0;
    int y = 0;
    int z = 0;
    int xv;
    int yv;
    int zv;

    cin >> n;
    while (n--) {
        cin >> xv >> yv >> zv;
        x += xv;
        y += yv;
        z += zv;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}