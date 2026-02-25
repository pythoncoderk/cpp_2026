#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n & (n - 1)) == 0 ? "OK" : "NG");
    return 0;
}