#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000;
const int MOD = 10007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> p_rt(MAX_N + 1, 0);
    vector<int> p_v(MAX_N + 1, 0);
    vector<int> p_lft(MAX_N + 1, 0);

    p_rt[1] = 1;
    p_v[1] = 1;
    p_lft[1] = 0;
    p_rt[2] = 2;
    p_v[2] = 1;
    p_lft[2] = 0;
    p_rt[3] = 3;
    p_v[3] = 2;
    p_lft[3] = 1;

    for (int i = 4; i <= MAX_N; i++) {
        p_rt[i] = (p_rt[i-1] + p_v[i-1]);
        p_v[i] = p_rt[i-1];
        p_lft[i] = (p_rt[i-3] + p_lft[i-2]);
    }

    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        int data, n;
        cin >> data >> n;

        int total_paths = (p_rt[n] + p_v[n] + p_lft[n]) % MOD;
        cout << data << " " << total_paths << "\n";
    }

    return 0;
}