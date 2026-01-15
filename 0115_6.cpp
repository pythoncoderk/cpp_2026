#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v(n);
    int chk = 0;
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        int ans = v[chk];
        if (ans == 2) {

            cnt++;
            cout << cnt << endl;
            return 0;
        } else {
           chk = v[chk]-1;
            cnt++;
        }

    }
    cout << -1 << endl;
}