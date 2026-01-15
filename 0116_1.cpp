#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n - s.size(); i++) {
        cout << "o";
    }
    cout << s << endl;
}