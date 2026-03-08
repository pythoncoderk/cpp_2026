#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << (n < 10000 ? n + 10000 : n) << "\n";
    return 0;
}