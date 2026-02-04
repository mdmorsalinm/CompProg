#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long a_n = (n + a - 1) / a;
    long long a_m = (a + m - 1) / a;
    cout << a_m * a_n << "\n";
    return 0;
}