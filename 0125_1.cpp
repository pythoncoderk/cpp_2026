#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v1(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    int m = 0;
    cin >> m;
    vector<string> v2(m);
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    for (int i = 0; i < m; i++) {
        int x = count(v1.begin(), v1.end(), v1[i]);
        int y = count(v2.begin(), v2.end(), v1[i]);

        ans.push_back(x - y);
    }
    cout << *max_element(ans.begin(), ans.end()) << endl;

}