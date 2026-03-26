#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s1, s2, s3;
    cin >> n >> s1 >> s2 >> s3;
    vector<string> v = {s1, s2, s3};
    cout << v[n-1] << "\n";
    return 0;
}