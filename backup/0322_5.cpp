#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int S = 0;
    int R = 0;

    for (char c : s) {
        if (c == 'S') S++;
        else if (c == 'R') R++;
    }
    cout << S << " " << R << "\n";
    return 0;

}