#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int discounted = b * 7 / 10;
    cout << min(a, discounted) << "\n";
    return 0;
}