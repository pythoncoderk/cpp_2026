#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int mx = max(m, n);

    cout << (n == m ? string("eq") : to_string(mx)) << "\n";
    return 0;
}