#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> str(n);

    vector<string> v(n+2, string(m+2, '#'));

    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            v[i][j] = str[i-1][j-1];
        }
    }
    for (int i = 0; i < n+2; i++) cout << v[i] << endl;

}