#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a = 0;
    for (int i = 1; i < 10; i++) {
        cout << n + a << " ";
        a += m;
    }
    cout << a + n << "\n";
    return 0;
}