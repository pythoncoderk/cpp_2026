#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int run = (x / (a + b)) * a;
    int cycle = min(x % (a + b), a);

    cout << (run + cycle) * s << endl;
}