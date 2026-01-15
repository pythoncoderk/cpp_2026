#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    n *= 1000;
    int i = 0;
    while (true) {
        if (m * i > n) {
            cout << i << "\n";
            break;
        } else {
            i++;
        }
    }
}