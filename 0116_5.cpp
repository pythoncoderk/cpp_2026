#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int i = 0;
    while (i < 100) {
        if (x == y * z) {
            cout << "Yes" << "\n";
            return 0;
        } else {
            x++;
            y++;
            i++;
        }
    }
    cout << "No" << "\n";
}