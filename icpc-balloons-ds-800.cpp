#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int count = 0;
        set<char> letters;
        int l;
        string word;
        cin >> l >> word;
        for (int j = 0; j < l; j++) {
            if (letters.count(word[j])) {
                count++;
            } else {
                count += 2;
            }
            letters.insert(word[j]);
        }
        cout << count << "\n";
    }
    return 0;
}