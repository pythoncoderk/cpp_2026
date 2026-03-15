#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int d, e, f;
    cin >> d >> e >> f;

    int aa = a * b;
    int bb = d * e;

    if ((aa * f) == (bb * c)) cout << "DRAW" << "\n";
    else if (aa * f > bb * c) cout << a << " " << b << " " << c << "\n";
    else cout << d << " " << e << " " << f << "\n";
    return 0;
}