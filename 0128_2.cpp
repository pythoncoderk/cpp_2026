#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }
    cout << min({v[0], v[1], v[2], v[3]}) << "\n";
    return 0;
}