#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = INT_MIN;
    int mi = INT_MAX;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int len = s.size();
        mx = max(mx, len);
        mi = min(mi, len);

    }
    cout << mx - mi << "\n";
    return 0;
    
}