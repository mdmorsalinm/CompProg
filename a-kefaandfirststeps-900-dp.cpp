#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int count = 1;
    cin >> n;
    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    vector<int> listy(n);
    for (int i = 0; i < n; i++) {
        cin >> listy[i];
    }
    int max_count = count;
    for (int i = 1; i < n; i++) {
        if (listy[i-1] <= listy[i]) {
            count++;
        } else {
            count = 1;
        }
        if (count >= max_count) {
            max_count = count;
        }
    }

    cout << max_count << "\n";
    return 0;
}