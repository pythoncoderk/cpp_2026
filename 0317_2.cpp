#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c : s) {
        if (isdigit(c)) cout << c;
    }
    cout << "\n";
    return 0;
}