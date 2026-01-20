#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s, a, b, x;
    cin >> s >> a >> b >> x;

    long long cycle = a + b;
    long long full = x / cycle;
    long long rem = x % cycle;

    long long run_seconds = full * a + min(rem, a);
    long long ans = s * run_seconds;

    cout << ans << "\n";
    return 0;
}