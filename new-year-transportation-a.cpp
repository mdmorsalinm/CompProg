#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int t;
    int a;
    cin >> n >> t;
    vector<int> train(n);
    for (int i = 0; i < n; i++) {
        cin >> a;
        train[i] = a;
    }
    int index = 1;
    int temp;
    while (index < t) {
        index = index + train[index-1];
    }

    if (index == t) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}