#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < 7; i++) {
        int a;
        cin >> a;
        total += a;
    }
    cout << min(total, n) << endl;
    return 0;
}