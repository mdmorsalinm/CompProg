#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int k;

    cin >> n >> k;
    int count = 0;
    vector<int> rank(n);

    for (int i = 0; i < n; i++) {
        cin >> rank[i];
    }
    int value = rank[k-1];

    for (int i = 0; i < n; i++) {
        if (rank[i] >= value && rank[i] > 0) {
            count++;
        } else {
            break;
        }
    }
    cout << count << "\n";
    return 0;
}