#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int one = a * b / 100;
    int two = a * c / 100;

    cout << two - one << "\n";
    return 0;
}