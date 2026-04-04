#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = n;
    for (int i = 0; i < 9; i++) {
        if (i != 8) cout << cnt << " ";
        else cout << cnt << "\n";
        cnt += n;
    }
    return 0;
}