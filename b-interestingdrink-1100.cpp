#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int temp;
    int m;
    int sm;
    cin >> n;
    vector<int> stores(n);
    for (int i = 0; i < n; i++) {
        cin >> stores[i];
    }
    sort(stores.begin(), stores.end());
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> sm;
        auto it = upper_bound(stores.begin(), stores.end(), sm);

        int count = it - stores.begin();
        cout << count << "\n";
    }
    return 0;
}