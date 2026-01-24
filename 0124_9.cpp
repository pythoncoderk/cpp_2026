#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec.at(i);
    }

    for (int i = 0; i < n; i++) {
        sum += vec.at(i);
    }

    int avg = sum / n;

    for (int i = 0; i < n; i++) {
        cout << abs(avg - vec.at(i)) << "\n";
    }
}