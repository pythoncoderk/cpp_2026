#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    vector<int> v = {a, b, c, d, e, f, g};

    double sum = 0;
    for (int x : v) sum += x;

    double ans = sum / v.size();
    double final = round(ans * 10) / 10;

    cout << fixed << setprecision(1) << final << "\n";
    return 0;

}