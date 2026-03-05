#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n-1; i++) {
        string t;
        cin >> t;
        s = s + " " + t;
    }
    cout << s << "\n";
    return 0;
}