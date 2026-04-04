#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> v = {a, b, c, d, e};
    cout << *max_element(v.begin(), v.end()) << "\n";
    cout << *min_element(v.begin(), v.end()) << "\n";
    return 0;
}