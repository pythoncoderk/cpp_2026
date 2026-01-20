#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int len = 0;
    while (n >= 10) {
        if (n >= 10) {
            n = n / 10;
            len++;
        }

    }
    cout << len + 1 << endl;
}