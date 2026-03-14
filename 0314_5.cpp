#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool check = true;
    for (char c : s) {
        if (c == 'I' || c == 'i' || c == 'l') check = false;
    }
    cout << (check ? s : "caution") << "\n";
    return 0;
}