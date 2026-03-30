#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (char c : s) {
        if (c == 'y') cnt++;
    }
    cout << cnt << "\n";
    return 0;

}