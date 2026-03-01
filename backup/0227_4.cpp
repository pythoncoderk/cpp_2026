#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<string> v1 = {s1, s2, s3};
    vector<int> v;
    for (int i = 0; i < 3; i++) {
        v.push_back(v1[i].size());
    }
    int mx = *max_element(v.begin(), v.end());
    cout << mx << "\n";
    return 0;
}