#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    cout << max({s1.size(), s2.size(), s3.size()}) << "\n";
    return 0;
}