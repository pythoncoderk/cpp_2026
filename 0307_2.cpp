#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int amount = n / a;

    cout << amount * b - amount * a << "\n";
    return 0;
}