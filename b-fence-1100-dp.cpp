#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n;
    int k;
    int ind = 0;
    long long count = 0;
    long long min_count = 0;
    cin >> n >> k;
    vector<int> listy(n);
    for (int i = 0; i < n; i++) {
        cin >> listy[i];
    }

    for (int i = 0; i < k; i++) {
        count += listy[i];
        min_count = count;
        ind = 0;
    }
    for (int i = 1; i < n - k + 1; i++) {
        count = count - listy[i-1] + listy[i+k-1];
        if (min_count > count) {
            ind = i;
            min_count = count;
        }
    }

    cout << ind + 1 << "\n";
    return 0;
}