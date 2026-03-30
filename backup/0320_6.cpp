#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;

    vector<int> v = {a, b, c, d, e, f, g};
    int x;
    cin >> x;

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << (sum >= x * 7 ? "pass" : "failure") << "\n";
    return 0;
}