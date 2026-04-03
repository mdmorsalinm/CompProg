#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        unordered_map<int, int> nums;
        int n;
        cin >> n;
        long long count = 0;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            int sum = a - j;
            count += nums[sum];
            nums[sum]++;
        }
        cout << count << "\n";
    }
    return 0;
}
