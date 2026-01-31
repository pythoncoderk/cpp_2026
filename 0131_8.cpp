#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 7; i++) {

        string sun = "";
        cin >> sun;
        if (sun == "Rain") cnt++;
    }
    if (cnt >= 4) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}