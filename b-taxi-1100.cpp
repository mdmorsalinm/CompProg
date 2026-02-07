#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count[5] = {0};

    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        count[temp]++;
    }

    int total = 0;

    total += count[4];

    total += count[3];

    count[1] -= count[3];
    if (count[1] < 0)
        count[1] = 0;
    
    total += count[2] / 2;

    if (count[2] % 2 != 0) {
        total++;
        count[1] -= 2;
        if (count[1] < 0) 
            count[1] = 0;
    }

    total += (count[1] + 3) / 4;

    cout << total << "\n";
    return 0;
}