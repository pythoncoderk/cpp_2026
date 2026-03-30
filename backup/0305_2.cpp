#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(10);
    for (int i = 0; i < 10; i++) {
        string s;
        cin >> s;
        v[i] = s;
    }
    cout << v[n - 1] << "\n";
    return 0;
}