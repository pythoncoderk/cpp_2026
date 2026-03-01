#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    cout << (s == "chocolate" ? n * 2 : n * 5) << "\n";
    return 0;
}