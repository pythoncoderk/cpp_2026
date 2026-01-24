#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    vector<int> b;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a.push_back(v[i]);
        } else {
            b.push_back(v[i]);
        }

    }


    int sum_a = accumulate(a.begin(), a.end(), 0);
    int sum_b = accumulate(b.begin(), b.end(), 0);
    cout << sum_a - sum_b << endl;

}