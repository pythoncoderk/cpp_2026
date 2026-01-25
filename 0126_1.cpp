#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(7);

    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);

    cout << sum << "\n";

}