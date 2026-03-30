#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, q;
        string a;
        string b;
        cin >> n >> q;
        cin >> a >> b;
        for (int j = 0; j < q; j++) {
            int count = 0;
            int l, r;
            cin >> l >> r;
            vector<int> a_s(26);
            vector<int> b_s(26);
            for (int k = l-1; k < r; k++) {
                int ind = a[k] - 97;
                a_s[ind]++;
            }
            for (int k = l-1; k < r; k++) {
                int ind = b[k] - 97;
                b_s[ind]++;
            }
            for (int k = 0; k < 26; k++) {
                count += abs(a_s[k] - b_s[k]);
            }
            cout << count/2 << "\n";
        }
    }
    return 0;
}
