#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec1;
    vector<int> vec2;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        vec2.push_back(y);
    }
    for (int i = 0; i < n; i++) {
        cout << vec1[i] + vec2[i] << endl;
    }
}