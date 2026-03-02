#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};
    string s;
    cin >> s;

    for (char c : s) {
        if (find(v.begin(), v.end(), c) == v.end()) {
            cout << c;
        }
    }
    cout << "\n";
    return 0;
}