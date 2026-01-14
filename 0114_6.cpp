#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec1(n);
    vector<int> vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1.at(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> vec2.at(i);
    }
    for (int i = 0; i < n; i++) {
        cout << vec1.at(i) + vec2.at(i) << endl;
    }
}