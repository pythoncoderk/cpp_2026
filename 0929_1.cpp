#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    cout << max(max(s1.length(), s2.length()), s3.length()) << "\n";
    return 0;
}