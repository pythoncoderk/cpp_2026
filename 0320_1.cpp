#include <bits/stdc++.h>
using namespace std;

int main() {
    int total = 0;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        total += x;
    }
    int avg;
    cin >> avg;
    cout << ((total / 7) >= avg ? "pass" : "failure") << "\n";
    return 0;
}